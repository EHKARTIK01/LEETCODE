class Solution {
public:
int t[501][501];
    int  solve(int i , int j , vector<int>& piles){
        if(i>j){
            return 0 ; 
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        if(i==j){
            return piles[i];
        }
        int take_i = piles[i]+ min(solve(i+2,j,piles),solve(i+1, j-1, piles)); 
        int take_j = piles[j]+min(solve(i,j-2,piles), solve(i+1, j-1, piles));
        return t[i][j] = max(take_i,take_j);
    }
    bool stoneGame(vector<int>& piles) {
        memset(t, -1, sizeof(t));
        int n = piles.size();
        int sum = accumulate(piles.begin(),piles.end(),0);
        int p1 = solve(0,n-1,piles);
        int p2 = sum - p1 ; 
        if(p1>p2){
            return true ; 
        }
        return false ; 
        
    }
};
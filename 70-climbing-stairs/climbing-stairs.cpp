class Solution {
public:
    int solve(int n){
        if (n<0)
            return 0;
        if (n==0)
            return 1;

        if(n==2){
            return 2 ; 
        }
        if(n==3){
            return 3 ; 
        }
        if(n==4){
            return 5 ; 
        }
        if(n==5){
            return 8 ; 
        }
        int one_step = solve(n-1);
        int two_step = solve(n-2);
        return one_step + two_step;
    }
    int climbStairs(int n) {
        return solve(n);
    }
};
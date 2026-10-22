class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ac = 0 ;
        int dc = 0 ; 
        for(int i = 1 ; i<n; i++){
         ac+=(nums[i]==(nums[i-1]+1)%n);
         dc+=(nums[i-1]==(nums[i]+1)%n);
            // return 0 case 


        }
        if(ac==n-1 && nums[0]==0){
            return 0 ;
        }
        if(ac==n-1){
            int lfr = n - nums[0];
            int rtr = 1+(nums.back()+1)+ 1; 
            return min(lfr, rtr);
        }
        if(dc==n-1){
            int lfr = n- nums.back() +1 ; 
            int rft = (nums[0]+1)%n +1;
            return min(lfr , rft );
        }
        return -1 ; 
    
    }
};
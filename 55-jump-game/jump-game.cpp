class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxx = 0;
        int i = 0;
        for(i = 0; i<n; i++){
            if(i>maxx)return false;
            maxx = max(maxx, i+nums[i]);
        }



        return true;


        
        
        
    }
};
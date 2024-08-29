class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum = 0, n = nums.size(), max= -9999999;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            if(max< sum )max = sum;
            if(sum<0){
                sum = 0;
            }
        }
        return max;


        
    }
};
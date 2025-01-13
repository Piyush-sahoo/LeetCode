class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int min = INT_MIN;
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            sum = sum+ nums[i];
            if(sum>min){
                min = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }

        return min;
        
        
    }
};
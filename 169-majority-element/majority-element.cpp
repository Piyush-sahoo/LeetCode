class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1;
        int ele = nums[0];
        int n = nums.size();
        for(int i = 1; i<n; i++){
            if(cnt==0){
                ele= nums[i];
                cnt++;
            }
            else if(cnt!=0 && ele == nums[i]){
                cnt++;
            }
            else{
                cnt--;

            }
        }
        return ele;
        
    }
};
class Solution {
public:

    int helper(vector<int>& nums, int target, int l, int h){
        if(l>h){
            return -1;
        }
        int mid = l+ (h-l)/2;
        if(nums[mid]== target) return mid;
        else if(nums[mid]<target) return helper(nums, target, mid+1, h);
        else return helper(nums, target, l, mid-1);
        

    }
        int search(vector<int>& nums, int target) {
        

        return helper(nums, target, 0, nums.size()-1);


        
    }
};
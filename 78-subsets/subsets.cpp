class Solution {
public:
    void helper(int idx, int n, vector<int>& res, vector<int>& nums, vector<vector<int>>& ans){
        if(idx == n){
            // sort(res.begin(), res.end());
            ans.push_back(res);
            return ;

        }
        helper(idx+1, n, res, nums, ans);

        res.push_back(nums[idx]);

        helper(idx+1, n, res, nums, ans);
        res.pop_back();
        return;

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        vector<vector<int>> ans;
        helper(0, n, res, nums, ans);
        return ans;
        
    }
};
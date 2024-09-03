class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> m;
        int n = nums.size();
        for(auto it:nums){
            m[it]++;
        }

        vector<int> ans;
        for(auto it: m){
            if(it.second>n/3) ans.push_back(it.first);
        }

        return ans;




        
    }
};
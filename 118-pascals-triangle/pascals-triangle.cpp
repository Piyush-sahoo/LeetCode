class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> ans(num);

        // Generate each row of Pascal's Triangle
        for (int i = 0; i < num; i++) {
            // Set the first element to 1
            ans[i].push_back(1);
            
            // Fill in the middle elements (if any)
            for (int j = 1; j < i; j++) {
                int temp = ans[i - 1][j - 1] + ans[i - 1][j];
                ans[i].push_back(temp);
            }
            
            // Set the last element to 1 if it's not the first row
            if (i > 0) {
                ans[i].push_back(1);
            }
        }

        return ans;
    }
};

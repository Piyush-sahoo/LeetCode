class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int min=arr[0], ans = 0;
        int n = arr.size();
        

        for(int i = 1; i<n; i++){

            ans = max(ans, arr[i]-min);

            if(min>arr[i])min = arr[i];
        }

        return ans;
        
    }
};
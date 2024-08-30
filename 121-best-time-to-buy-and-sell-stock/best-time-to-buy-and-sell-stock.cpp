class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        vector<int> sm(n, 9999), lr(n, -9999);
        int sml = 9999, lar = -9999;
        for(int i = 0; i<n; i++){
            if(sml>arr[i]) sml = arr[i];
            // if(lar>arr[i])lmr = arr[i];
            if(sml<sm[i])sm[i] = sml;
        }

        for(int i = n-1; i>=0; i--){
            if(lar<arr[i]) lar = arr[i];
            // if(lar>arr[i])lmr = arr[i];
            if(lar>lr[i])lr[i] = lar;
        }

        int maxx = 0; // Variable to store the maximum profit
        for (int i = 0; i < n; i++) {
            maxx = std::max(maxx, lr[i] - sm[i]); // Calculate the maximum profit
        }
        return maxx;

        
    }
};
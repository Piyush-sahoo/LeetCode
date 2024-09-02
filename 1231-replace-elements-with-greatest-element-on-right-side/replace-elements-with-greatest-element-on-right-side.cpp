class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int max = -1, n = a.size();
        vector<int> ans(n, -1);
        for(int i= n-1; i>=0; i--){
            ans[i] = max;
            if(a[i]>max){
                max= a[i];
            }
            
        }
        return ans;

        
    }
};
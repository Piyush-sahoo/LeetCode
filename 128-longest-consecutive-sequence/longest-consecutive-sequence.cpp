class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() ==0) return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int lng = 1;
        

        for(auto it: st){
            if(st.find(it-1) == st.end()){
                int cnt = 1; 
                while(st.find(it+1) != st.end()){
                    cnt++;
                    it++;
                }
                lng = max(cnt, lng);
            }


            
        }
        return lng;


        
    }
};
#include<bits/stdc++.h>
class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        if (s.size()==0)return 0;

        unordered_set<char> um;
        int maxx = -9999, r =0 , l = 0, n = s.size();
        for(r = 0; r<n; r++){
            if(um.find(s[r])!= um.end()){
                while(l<r && um.find(s[r]) != um.end()){
                    um.erase(s[l]);
                    l++;

                }
                
            }
            
                um.insert(s[r]);
                maxx = max(maxx, r-l+1);
            

        }

        
        return maxx;
    }
};
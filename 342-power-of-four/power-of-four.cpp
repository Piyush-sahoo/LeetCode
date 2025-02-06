class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0) return false;

        long long ans = 1;
        while(ans< n){
            if(ans>n)return false;
            ans = ans*4;
        }
        if(ans == n)
        return true;
        return false;

        
    }
};
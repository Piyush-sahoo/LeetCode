class Solution {
public:
    double poww(double x, long long n){
        if (n ==0 )return 1;
        
        return x * pow(x, n-1);
    }
    double myPow(double x, int n) {
        long long num = n;
        double ans = poww(x, abs(num));
        if(n <0)return 1/ans;
        return ans;

        

        
    }
};
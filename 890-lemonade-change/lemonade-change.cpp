class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // sort(bills.begin(), bills.end());

        int a = 0, b = 0, c = 0;
        for(auto it : bills){
            if(it == 5) a++;
            else if ( it == 10){
                if(a<=0)return false;
                b++;
                a--;
            }
            else{
                if(b>0 && a>0){
                    b--;
                    a--;
                }
                else if(b<= 0 && a>=3){
                    a-=3;
                }
                else{
                    return false;
                }
            }
        }

        return true;

        
    }
};
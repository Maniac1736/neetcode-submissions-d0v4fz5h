class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0] != 5) return false;
        else{
            int x = 1;
            int i5 = 1, i10 = 0, i20 = 0;

            for(x; x < bills.size(); x++){
                if(bills[x] == 5) i5++;
                else if(bills[x] == 10){
                    i10++;
                    if(i5 > 0) i5--;
                    else return false;
                }
                else if(bills[x] == 20){
                    if(i10 > 0 && i5 > 0){
                        i10--; 
                        i5--;
                    }
                    else if(i5 >= 3) i5 -= 3;
                    else return false;
                } 
            }
        }
        return true;
    }
};
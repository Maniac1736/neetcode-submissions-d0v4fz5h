class Solution {
public:
    int mySqrt(int x) {
        long i = 1;
        for(i ; i<= x; i++){
            if(i*i == x) return i;
            else if (i*i > x) return i-1;
        }
        return 0;
    }
};
class Solution {
public:
    int reverseBits(int n) {
        int temp = 0;
        int bit = 32;
        while(bit!=0){
            temp <<= 1;
            temp = temp | (n & 1);
            n >>= 1;
            bit--;
        }
        return temp;
    }
};
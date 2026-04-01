class Solution {
public:
    int a(int b){
        if(b==0) return 0;
        if(b==1) return 1;
        if(b==2) return 1;
        return a(b-1) + a(b-2) + a(b-3);
    }

    int tribonacci(int n) {
        return a(n);
    }
};
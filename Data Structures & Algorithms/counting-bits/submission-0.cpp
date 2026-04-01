class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        int count = 0;
        for(int i = 0; i <= n; i++){
            int j = i;
            while(j != 0){
                if(j & 1) count++;
                j = j >> 1;
            }
            ans[i] = count;
            count = 0;
        }
        return ans;
    }
};
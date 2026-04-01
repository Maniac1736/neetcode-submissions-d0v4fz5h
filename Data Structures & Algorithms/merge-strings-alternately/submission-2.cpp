class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.length();
        int m = word2.length();
        for (int j = 0; j < min(n,m); j++){
            ans.push_back(word1[j]);
            ans.push_back(word2[j]);
        }
        if(n==m) return ans;
        if(n<m){
            for(int i = n; i < m; i++){
                ans.push_back(word2[i]);
            }
        }
        if (n>m){
            for(int i = m; i < n; i++){
                ans.push_back(word1[i]);
            }
        }
        return ans;
    }
};
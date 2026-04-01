class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        for (int j = 0; j < word1.length() || j < word2.length(); j++){
            if(j<word1.length()){
                ans += word1[j];
            }
            if(j<word2.length()){
                ans += word2[j];
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> nc;
        vector<int> ans;
        for(int x : nums){
            nc[x]++;
        }
        int n = nums.size();
        for(auto &a : nc){
            if(a.second > n/3) {
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};
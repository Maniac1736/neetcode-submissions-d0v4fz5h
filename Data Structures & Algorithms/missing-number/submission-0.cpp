class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> num;
        for(int c : nums){
            num.insert(c);
        }

        for(int i = 0; i <= nums.size(); i++){
            if(num.find(i) == num.end()) return i;
        }
        return -1;
    }
};

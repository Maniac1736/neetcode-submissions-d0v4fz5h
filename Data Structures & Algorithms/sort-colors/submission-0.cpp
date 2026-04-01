class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> sort;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) {
                sort.push_back(0);
            }
        }
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) {
                sort.push_back(1);
            }
        }
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == 2) {
                sort.push_back(2);
            }
        }
        nums = sort;
    }
};
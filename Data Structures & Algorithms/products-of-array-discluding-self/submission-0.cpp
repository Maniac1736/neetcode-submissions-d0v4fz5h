class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> zero;
        int count = 0;
        for (int i = 0; i < nums.size(); i++){
            zero.push_back(0);
            if(nums[i] == 0) {
                count++;
            }
        }
        if (count > 1) return zero;

        if (count == 1) {
            int index = 0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] != 0) {
                    count *= nums[i];
                }
                if(nums[i] == 0){
                    index = i;
                }
            }
            zero[index] = count;
            return zero;
        }

        if (count == 0){
            int mult = 1;
            for(int i = 0; i < nums.size(); i++){
                mult *= nums[i];
            }
            for(int j = 0; j < nums.size(); j++){
                nums[j] = mult/nums[j];
            }
        }
        return nums;
    }   
};

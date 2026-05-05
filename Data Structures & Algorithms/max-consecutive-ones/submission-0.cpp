class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int a = 0;
        for(int i = 0; i < nums.size();i++){
            if(nums[i] == 1){
                count++;
                a = max(a,count);
            }
            else{
                count = 0;
            }
        }
        return a;
    }
};
class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin(),p.end());
        int count = 0, left = 0, right = p.size() - 1;
        while(left <= right){
            if(p[left] == limit){
                left++;
                count++;
            }
            else{
                if(p[right] + p[left] <= limit) {
                    count++;
                    left++;
                    right--;
                }
                else{
                    count++;
                    right--;
                }
            }
        }
        return count;
    }
};
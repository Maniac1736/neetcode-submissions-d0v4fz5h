class Solution {
public:
    int maxArea(vector<int>& a) {
        int left = 0;
        int maxarea = 0;
        int right = a.size() - 1;
        while ( left < right ) {
            int area = min(a[left], a[right])*(right-left);
            maxarea = max(area,maxarea);

            if(a[left] > a[right]){
                right--;
            }
            else {
                left++;
            }
        }
        return maxarea;
    }
};

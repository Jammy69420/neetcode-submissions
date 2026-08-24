class Solution {
public:
    int trap(vector<int>& height) {
        int maxLeft = height[0];
        int maxRight = height[height.size()-1];

        int l = 0;
        int r = height.size() - 1;
        int res = 0;

        while (l < r) {
            if (maxLeft < maxRight) {
                l++;
                maxLeft = max(maxLeft, height[l]);
                res += maxLeft - height[l];
            }
            else {
                r--;
                maxRight = max(maxRight, height[r]);
                res += maxRight - height[r];
            }
        }
        return res;
    }
};

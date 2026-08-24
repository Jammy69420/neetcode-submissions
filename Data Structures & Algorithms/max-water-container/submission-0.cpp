class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = 0;

        int i = 0;
        int j = heights.size() - 1;

        while (i < j) {
            int area;
        
            if (heights[i] < heights[j]) {
                area = heights[i] * (j-i);
                i++;
            }
            else {
                area = heights[j] * (j-i);
                j--;
            }

            if (area > max_area) max_area = area;
    }

    return max_area;
};
};

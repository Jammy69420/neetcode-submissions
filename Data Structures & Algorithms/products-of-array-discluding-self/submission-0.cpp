class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix_forward(nums.size(), 1);
        vector<int> prefix_backward(nums.size(), 1);

        for (int i = 1; i < nums.size(); i++) {
            prefix_forward[i] = prefix_forward[i - 1] * nums[i - 1];
        }

        prefix_backward[nums.size() - 1] = 1;

        for (int i = nums.size() - 2; i >= 0; i--) {
            prefix_backward[i] = prefix_backward[i + 1] * nums[i + 1];
        }

        vector<int> result(nums.size());
        result[0] = prefix_backward[nums.size() - 1];
        result[nums.size() - 1] = prefix_forward[nums.size() - 1];

        for (int i = 0; i < result.size(); i++) {
            result[i] = prefix_forward[i] * prefix_backward[i];
        }

        return result;
    }
};

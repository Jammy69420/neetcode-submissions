class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int target = nums[i];

            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {
                int threeSum =  target + nums[l] + nums[r];

                if (threeSum > 0) r--;
                else if (threeSum < 0) l++;
                else {
                    vector<int> ans = {target, nums[l], nums[r]};
                    res.push_back(ans);
                    l++;
                    while (nums[l] == nums[l - 1] && l < r) { 
                        l++;
                    }
                } 
            }

        }
        return res;
    }
};

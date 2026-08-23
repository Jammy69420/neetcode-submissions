class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> rem;

        //iterate through the array, while keeping track of the visited integers
        for (int i = 0; i < nums.size(); i++) {
            rem[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (rem.count(complement) && rem[complement] != i) {
                return {i, rem[complement]};
            } 
        }

        return {};
    }
};

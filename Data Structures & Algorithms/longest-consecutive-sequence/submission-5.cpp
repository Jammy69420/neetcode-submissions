class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers; 

        //add all numbers to the set
        for (int i = 0; i < nums.size(); i++) {
            numbers.insert(nums[i]);
        }

        int max_length = 0;
        //iterate through the array to find sequence starters
        for (int i = 0; i < nums.size(); i++) {
            if (!numbers.count(nums[i]-1)) {
                int length = 1;
                int starter = nums[i];
                while (numbers.count(starter+1)) {
                    length++;
                    starter++;
                }
                if (length > max_length) max_length = length;
            }
        }

        return max_length;
    }
};

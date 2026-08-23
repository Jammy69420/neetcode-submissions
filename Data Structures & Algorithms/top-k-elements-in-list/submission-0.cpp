class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq; //value -> frequency
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        vector<int> answer;
        while (k != 0) {
            int max_freq = 0;
            int max;
            for (int i = 0; i < nums.size(); i++) {
                if (freq[nums[i]] > max_freq) {
                    max_freq = freq[nums[i]];
                    max = nums[i];
                }
            }
            freq[max] = 0;
            answer.insert(answer.begin(), max);
            k--;
        }

        return answer;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq; //value -> frequency
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        vector<vector<int>> buckets(nums.size()+1);

        for (auto& [value, frequency] : freq) {
            buckets[frequency].push_back(value);
        }

        vector<int> answer;
        
        for (int i = buckets.size() - 1; i > 0; i--) {
            for (int& num : buckets[i]) {
                answer.push_back(num);
                if (answer.size() == k) return answer;
            }
        }
        return answer;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> result;

        for (string& s : strs) {
            int count[26] = {0};

            for (int i = 0; i < s.size(); i++) {
                count[s[i] - 'a']++;
            }

            string key;

            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + '#';
            }

            result[key].push_back(s);
        }

        vector<vector<string>> answer;

        for (auto& [key, group] : result) {
            answer.push_back(group);
        }

        return answer;
    }
};
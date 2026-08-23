class Solution {
public:
    bool isAnagram(string s, string t) {
        //If the two strings arent the same size, its not an anagram
        if (s.size() != t.size()) return false;

        //Create a fixed 26 elements array with the default value of 0
        vector<int> count(26, 0);

        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int j = 0; j < count.size(); j++) {
            if (count[j] != 0) return false;
        }

        return true;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        //If the two strings arent the same size, its not an anagram
        if (s.size() != t.size()) return false;

        //Count maps for each string
        std::unordered_map<char, int> count_s;
        std::unordered_map<char, int> count_t;

        //Counting how many times a character appears in string s
        for (int i = 0; i < s.size(); i++) {
            count_s[s[i]]++;
        }

        //Counting how many times a character appears in string t
        for (int j = 0; j < t.size(); j++) {
            count_t[t[j]]++;
        } 

        //Checking whether the frequency of a certain character is similar between the two strings
        for (int k = 0; k < s.size(); k++) {
            if (count_s[s[k]] != count_t[s[k]]) return false;
        }

        return true;
    }
};

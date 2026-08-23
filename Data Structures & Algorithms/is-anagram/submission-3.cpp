class Solution {
public:
    bool isAnagram(string s, string t) {
        //If the two strings arent the same size, its not an anagram
        if (s.size() != t.size()) return false;

        //Sort the two strings in place
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        //Iterate through the string to compare each sorted character
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) return false;
        }
        
        return true;
    }
};

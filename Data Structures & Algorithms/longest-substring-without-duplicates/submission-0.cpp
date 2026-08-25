class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charSet(128, 0);  
        int maxLength = 0;
        int startCharIndex = 0;

        for (int i = 0; i < s.size(); i++) {
            while (charSet[s[i]] == 1) {
                charSet[s[startCharIndex]] = 0;
                startCharIndex++;
            }

            charSet[s[i]] = 1;

            maxLength = max(maxLength, i - startCharIndex + 1); 
        }

        return maxLength;
    }
};

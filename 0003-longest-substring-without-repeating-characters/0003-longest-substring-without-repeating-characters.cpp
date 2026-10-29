class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charCount(256, 0);
        int l = 0;
        int maxLen = 0;
        
        for (int r = 0; r < s.length(); r++) {
            charCount[s[r]]++;
            
            while (charCount[s[r]] > 1) {
                charCount[s[l]]--;
                l++;
            }
            maxLen = max(maxLen, r - l + 1 );
        }
        
        return maxLen;
    }
};
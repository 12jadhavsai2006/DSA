
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int lastLength = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                length++;
                lastLength = length; // Save the length of the current word
            } else {
                length = 0; // Reset length for the next word
            }
        }
        
        return lastLength;
    }
};
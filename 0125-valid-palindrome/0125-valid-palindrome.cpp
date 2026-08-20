class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        
        while (i < j) {
            // skip non-alphanumeric from the left
            while (i < j && !isalnum(s[i])) {
                i++;
            }
            // skip non-alphanumeric from the right
            while (i < j && !isalnum(s[j])) {
                j--;
            }
            
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            
            i++;
            j--;
        }
        
        return true;
    }
};
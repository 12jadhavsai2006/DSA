class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s.at(i) == t.at(j)) {
                j++; // Only move forward in t if characters match
            }
            i++; // Always move forward in s
        }
    
        return t.size() - j;
    }
};
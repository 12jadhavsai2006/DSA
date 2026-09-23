class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        // Traverse both strings
        while (i < s.size() && j < t.size()) {
            if (s.at(i) == t.at(j)) {
                i++; // Move forward in s only when there's a match
            }
            j++; // Always move forward in t
        }

        // If i reached the end of s, all characters were found in order
        return i == s.size();
    }
};
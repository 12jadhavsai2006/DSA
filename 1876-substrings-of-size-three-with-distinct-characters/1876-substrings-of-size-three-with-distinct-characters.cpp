class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        int n = s.length();
        
        if (n < 3) return 0;

        vector<int> sv(26, 0);

        for (int i = 0; i < 3; i++) {
            sv[s[i] - 'a']++;
        }

        if (sv[s[0]-'a'] == 1 && sv[s[1]-'a'] == 1 && sv[s[2]-'a'] == 1) {
            count++;
        }

        for (int i = 3; i < n; i++) {
            sv[s[i] - 'a']++;      
            sv[s[i - 3] - 'a']--;   

            if (sv[s[i] - 'a'] == 1 && sv[s[i-1] - 'a'] == 1 && sv[s[i-2] - 'a'] == 1) {
                count++;
            }
        }

        return count;
    }
};
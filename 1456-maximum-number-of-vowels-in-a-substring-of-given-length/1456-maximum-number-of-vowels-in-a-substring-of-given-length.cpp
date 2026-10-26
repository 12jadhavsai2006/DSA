class Solution {
public:
    int maxVowels(string s, int k) {
        int maxVowelCount = 0;
        int currentVowelCount = 0;
        
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                currentVowelCount++;
            }
        }
        
        maxVowelCount = currentVowelCount;
        
        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i])) {
                currentVowelCount++;
            }
            if (isVowel(s[i - k])) {
                currentVowelCount--;
            }
            
            maxVowelCount = max(maxVowelCount, currentVowelCount);
        }
        
        return maxVowelCount;
    }
};
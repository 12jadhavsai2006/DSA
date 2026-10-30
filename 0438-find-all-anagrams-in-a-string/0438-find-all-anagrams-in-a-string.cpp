#include <vector>
#include <string>

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int sl = s.length(),
            pl = p.length();

        vector<int> result;
        vector<int> sv(26,0);
        vector<int> pv(26,0);

        if(pl>sl) return result;

        for(int i=0; i<pl; i++) {
            sv[s[i]-'a']++;
            pv[p[i]-'a']++;
        }

        if(sv==pv) {
            result.push_back(0);
        }

        for(int i=pl; i<sl; i++) {
            sv[s[i]-'a']++;
            sv[s[i-pl]-'a']--;    
            if(sv==pv) {
                result.push_back(i-pl+1);
            }   
        }
    return result; 

    }
};
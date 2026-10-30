class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int s1l = s1.length(),
            s2l = s2.length();

        vector<int> sv1(26,0);
        vector<int> sv2(26,0);

        if(s1l>s2l) return false;

        for(int i=0; i<s1l; i++) {
            sv1[s1[i]-'a']++;
            sv2[s2[i]-'a']++;
        }

        if(sv1==sv2) {
            return true;
        }

        for(int i=s1l; i<s2l; i++) {
            sv2[s2[i]-'a']++;
            sv2[s2[i-s1l]-'a']--;

            if(sv1==sv2) {
            return true;
        }

        }
return false;
    }
};
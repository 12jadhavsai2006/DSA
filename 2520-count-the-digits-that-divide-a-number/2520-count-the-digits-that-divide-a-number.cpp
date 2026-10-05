class Solution {
public:
    int countDigits(int num) {
        int cnt =0,
            fix = num;
        while( num>0 ) {
            int a = num %10;
            if( fix % a == 0 ) {
                cnt++;
            }
            num/=10;
        }
        return cnt;
    }
};
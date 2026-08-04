class Solution {
public:
    bool isPalindrome(int x) {
        int org = x;
        long rev=0;
        while(x>0) {
            int a = x%10;
            x = x/10;
             rev = rev*10+a;
        }
        return rev == org;
    }
};
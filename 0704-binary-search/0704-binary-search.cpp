class Solution {
public:
    int search(vector<int>& n, int target) {
        int st=0, end=n.size()-1;
        while(st<=end) {
            int mid = st+(end-st)/2;
            if( n[mid]==target ) {
                return mid;
            }
            else if( n[mid]<target ) {
                st=mid+1;
            }else {
                end=mid-1;
            }
        }
return -1;
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(),
            pos_ind = 0,
            neg_ind = 1;
        vector<int> res(n,0);

        for ( int i=0; i<n; i++ ) {
            if( nums[i] >= 0 ) {
                res[pos_ind] = nums[i];
                pos_ind += 2;
            } else {
                res[neg_ind] = nums[i];
                neg_ind +=2;
            }
        }
return res;
    }
};
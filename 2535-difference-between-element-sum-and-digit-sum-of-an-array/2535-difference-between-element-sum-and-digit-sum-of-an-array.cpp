class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,
            s_sum=0;
        for( int i=0; i<nums.size(); i++ ) {

                sum += nums[i];

                while( nums[i] > 0 ) {
                    int a = nums[i] % 10;
                    s_sum += a;
                    nums[i] /= 10;
                
                }
        }
        return sum - s_sum;
    }
};
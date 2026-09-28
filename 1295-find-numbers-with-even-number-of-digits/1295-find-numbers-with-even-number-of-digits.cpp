class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++) {
            int temp =nums[i],
                cnt=0;
            while(temp>0) {
                temp= temp/10;
                cnt++;
            }
            if(cnt%2==0) {
                count++;
            }
        }
        return count;
    }
};
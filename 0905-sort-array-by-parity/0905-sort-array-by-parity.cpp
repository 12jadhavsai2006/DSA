#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int writeIndex = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                swap(nums[writeIndex], nums[i]);
                writeIndex++;
            }
        }
        return nums;
    }
};
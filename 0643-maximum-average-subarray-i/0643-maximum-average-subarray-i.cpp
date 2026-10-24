class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum = 0;
        
        for(int i = 0; i < k; i++) {
            currentSum += nums[i];
        }
                
        double max_sum = currentSum;
        
        for(int i = k; i < nums.size(); i++) {
            currentSum += nums[i] - nums[i - k]; 
            max_sum = max(max_sum, currentSum); 
        }
        
        return max_sum / k;
    }
};
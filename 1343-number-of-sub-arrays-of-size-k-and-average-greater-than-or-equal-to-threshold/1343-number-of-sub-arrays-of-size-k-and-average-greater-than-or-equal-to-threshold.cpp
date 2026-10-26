class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0,
            currentSum = 0;
        int targetSum = threshold * k;
        
        for (int i = 0; i < k; i++) {
            currentSum += arr[i];
        }
        
        if (currentSum >= targetSum) {
            count++;
        }
        
        for (int i = k; i < arr.size(); i++) {
            currentSum += arr[i] - arr[i - k];
            
            if (currentSum >= targetSum) {
                count++;
            }
        }
        
        return count;
    }
};
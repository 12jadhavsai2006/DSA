class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 0; // Pointer for the last unique element found
        
        for (int j = 1; j < nums.size(); j++) {
            // If we find a new unique element
            if (nums[j] != nums[i]) {
                i++;             // Move the unique pointer forward
                nums[i] = nums[j]; // Update it with the new unique value
            }
        }
        
        return i + 1; // Return the count of unique elements
    }
};
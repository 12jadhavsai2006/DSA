// class Solution {
// public:
//     int arraySign(vector<int>& nums) {
//         int prod = 1;
//         for ( int val : nums ) {
//             prod *= val;
//         }

//         if( prod > 0 ) {
//             return 1;
//         } else if( prod == 0 ) {
//             return 0;
//         } else {
//             return -1;
//         }
//     }
// };


class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1; // Tracks whether the product sign is positive or negative
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                return 0; // If any number is 0, the whole product is 0
            }
            if (nums[i] < 0) {
                sign = -sign; // Flip the sign for every negative number encountered
            }
        }
        
        return sign;
    }
};



/*
HOW TO THINK OF STATE-TRACKING (Instead of Brute-Force Math):

1. Check the Return Type: 
   - Does the problem ask for the exact big number (like 50,000,000), or just a simple state (like +1, -1, 0, True/False)?
   - Rule: If it only wants a state, NEVER calculate the full raw value.

2. Spot the Trap (Overflow):
   - If multiplying/adding values will exceed integer limits, stop accumulating.

3. Ask the "Property/Action" Question:
   - What actually changes the outcome? 
   - (Example: Positive numbers don't change a sign, negative numbers flip it, zeros kill it).
   - Track that rule using a simple "state variable" (like a toggle/switch) instead of storing the math.
   */
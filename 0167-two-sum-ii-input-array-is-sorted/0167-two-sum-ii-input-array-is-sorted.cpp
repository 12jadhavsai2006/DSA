class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int l=0 , r=numbers.size()-1;

        while(l<r) {
            int res = numbers[l]+numbers[r];
        if( res < target ) {
            l++;
        } else if( res > target ){
            r--;
        } else {
            result.push_back(l+1);
            result.push_back(r+1);
            return result;

        }

        }
return {};
    }
};
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int a = grumpy.size(),
            ans = 0,
            max_ans = 0,
            max_ans_till = 0;
        for(int i=0; i<minutes; i++) {
            if(grumpy[i] == 0) {
                ans += customers[i];
            } else {
                max_ans += customers[i];
            }
        }
        max_ans_till = max_ans;

        for(int i=minutes; i<grumpy.size(); i++) {

            if(grumpy[i] == 0) {
                ans += customers[i];
            } else {
                max_ans += customers[i];
            }

            if(grumpy[i-minutes] == 1) {

                max_ans -= customers[i-minutes];
            }
            max_ans_till = max( max_ans , max_ans_till );
           

        }
        return max_ans_till+ans;
    }
};

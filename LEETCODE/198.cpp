
class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1 = 0, prev2 = 0;
        for (int num : nums) {
            int temp = prev1;
            prev1 = max(prev2 + num, prev1);
            prev2 = temp;
        }
        return prev1;
    }
};
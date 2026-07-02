class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < (1 << n); i++) {
            int currXor = 0;

            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    currXor ^= nums[j];
                }
            }
            ans += currXor;
        }
        return ans;
    }
};
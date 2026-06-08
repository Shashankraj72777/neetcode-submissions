class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];

        for(int i = 0; i < nums.size(); i++){

            int curr = 0;
            
            for(int j = i; j < nums.size(); j++){
                curr += nums[j];
                ans = max(ans, curr);
            }
        }
        return ans;
    }
};

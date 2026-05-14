class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minimum = INT_MAX;
        int n = nums.size();

        for(int i = 0; i < n ; i++){

            int sum = 0;

            for (int j = i; j < n; j++){
                sum += nums[j];

                if(sum >= target){
                    minimum = min(minimum, j - i + 1);
                    break;
                }
            }
        }
        if (minimum != INT_MAX) {
            return minimum;
        }
        return 0;
    }
};
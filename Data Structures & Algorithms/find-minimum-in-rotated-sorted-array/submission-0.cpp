class Solution {
public:
    int findMin(vector<int>& nums) {
        int minimum = nums[0];

        for(int i = 0; i < nums.size(); i++){
            minimum = min(minimum, nums[i]);
        }
        return minimum;
    }
};
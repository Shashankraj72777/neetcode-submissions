class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;

        int n = nums.size();

        for(int i=0; i<n; i++){
            indices[nums[i]] = i;
        }

        for(int i=0; i<n; i++){
            int gap = target - nums[i];
            if(indices.count(gap) && indices[gap] != i)
            return {i, indices[gap]};
        }
        return {};
    }
};

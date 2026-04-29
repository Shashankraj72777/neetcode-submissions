class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prevMap;

        for(int i=0; i<nums.size(); i++){
            int gap = target - nums[i];
            if(prevMap.find(gap) != prevMap.end()){
            return {prevMap[gap], i};
            }
            prevMap.insert({nums[i], i});
        }
        return {};
    }
};

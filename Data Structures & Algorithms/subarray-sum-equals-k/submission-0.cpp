class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum += num;

            if (map.count(prefixSum - k)) {
                count += map[prefixSum - k];
            }
            map[prefixSum]++;
        }
        return count;
    }
};
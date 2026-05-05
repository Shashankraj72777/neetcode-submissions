class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> map;

        for (int num : nums){
            if(!map[num]){
                map[num] = map[num - 1] + map[num + 1] + 1;
                map[num - map[num - 1]] = map[num];
                map[num + map[num + 1]] = map[num];
                ans = max(ans, map[num]);
            }
        } 
        return ans;
    }
};

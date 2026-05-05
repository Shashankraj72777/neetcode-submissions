class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> map;
        int ans = 0;
        
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

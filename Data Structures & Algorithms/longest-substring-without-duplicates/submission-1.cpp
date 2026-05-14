class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++){
            // if character already exist in current window
            if(map.find(s[right]) != map.end() && map[s[right]] >= left){
                left = map[s[right]] + 1;
            }
            map[s[right]] = right; // update latest index

            ans = max(ans, right- left + 1); // calculate max length
        }
        return ans;
    }
};
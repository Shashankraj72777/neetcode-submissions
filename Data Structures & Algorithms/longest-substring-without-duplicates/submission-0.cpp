class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {

            unordered_set<char> set;
            int j;

            for (j = i; j < s.length(); j++){
                if(set.find(s[j]) != set.end()){
                    break;
                }
                set.insert(s[j]);
            }
            ans = max(ans, j - i);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);

        for (int n : nums){
            count[n] = 1 + count[n];
        }
        for(const auto& item : count){
            freq[item.second].push_back(item.first);
        }

        vector<int> ans;
        for(int i=freq.size() - 1; i>0; --i){
            for(int n : freq[i]){
                ans.push_back(n);
                if(ans.size() == k)
                return ans;
            }
        }
        return ans;   
    }
};

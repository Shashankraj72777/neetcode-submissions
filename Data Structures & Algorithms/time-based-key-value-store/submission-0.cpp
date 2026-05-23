class TimeMap {
public:

    unordered_map<string, vector<pair<int,string>>> mp;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        string res = "";

        for(auto it : mp[key]){
            if(it.first <= timestamp){
                res = it.second;
            }
        }
        return res;
    }
};

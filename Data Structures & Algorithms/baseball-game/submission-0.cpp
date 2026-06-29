class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        for (string &op : operations) {
            if (op == "+") {
                int score = st[st.size() - 1] + st[st.size() - 2];
                st.push_back(score);
            }
            else if (op == "D") {
                st.push_back(2 * st.back());
            }
            else if (op == "C") {
                st.pop_back();
            }
            else {
                st.push_back(stoi(op));
            }
        }

        int ans = 0;
        for (int score : st) {
            ans += score;
        }
        return ans;
    }
};
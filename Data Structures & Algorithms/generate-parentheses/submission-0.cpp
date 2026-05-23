class Solution {
public:

    bool isValid(string s){
        int count = 0 ;

        for(char ch : s){

            if(ch == '(')
            count++;
            else
            count--;

            if(count < 0)
            return false;
        }
        return count == 0;
    }

    void generate(string curr, int n, vector<string> &res){
        if(curr.length() == 2 * n){
            if(isValid(curr)){
                res.push_back(curr);
            }
            return;
        }
        generate(curr + "(", n, res); // put "("

        generate(curr + ")", n, res); // put ")"
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        generate("", n, ans);

        return ans;
    }
};
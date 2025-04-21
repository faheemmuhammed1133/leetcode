class Solution {
public:
    void solve(int n, vector<string>& ans,string curr, int open, int close){
        if(curr.length()== 2 * n ){
            ans.push_back(curr);
            return;
        }

        if( open < n ){
            solve(n,ans,curr+"(",open+1,close);
        }
        if(close<open){
            solve(n,ans,curr+")",open,close+1);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(n,ans,"",0,0);
        return ans;
    }
};
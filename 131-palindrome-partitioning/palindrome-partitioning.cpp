class Solution {
public:
    bool checkPalindrome(string s){
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }

    void solve(string str, vector<vector<string>>& ans, vector<string>& inner){
        if(str.empty()){
            ans.push_back(inner);
            return;
        }

        for(int i=1;i<=str.length();i++){
            string partition =str.substr(0,i);
            if(checkPalindrome(partition)){
                inner.push_back(partition);
                solve(str.substr(i),ans,inner);
                inner.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> inner;

        if(s.empty()) return ans;
        solve(s,ans,inner);

        return ans;
    }
};
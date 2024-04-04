class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char a[s.size()];
        string res="";
        for(int i=0;i<s.size();i++){
            a[indices[i]]=s[i];
        }
        for(char i:a){
            res+=i;
        }
        return res;
    }
};
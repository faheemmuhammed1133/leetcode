class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(), s.end());
        int i=0 ; 
        string pre="";
        while(i<s[0].size()){
            if(s[0][i]==s[s.size()-1][i]){
                pre+=s[0][i];
                i++;
            }else{
                return pre;
            }
        }


        // while(i<s.size()){

        // }
        return pre;
    }
};
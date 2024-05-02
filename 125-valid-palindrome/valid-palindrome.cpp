class Solution {
public:
    bool isPalindrome(string s) {
        string clear;
        for(int i=0;i<=s.length();i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                clear += tolower(s[i]);
            }
        }
        string reverse;
        for (int i=clear.length()-1;i>=0;i--){
            reverse+=clear[i];
        }
        if(reverse==clear){
            return true; 
        }else{
            return false;
        }
    }
};
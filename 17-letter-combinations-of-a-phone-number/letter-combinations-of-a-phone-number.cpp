class Solution {
public:
    vector<string> res;
    vector<string > codes={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void dialPad(string str, string ans){
    if(str.length()==0){
        res.push_back(ans);
        return; 
    }
    char ch =str[0];
    string roq = str.substr(1);

    int idx=ch-'0';
    for(int i=0;i<codes[idx].length();i++){
        char code=codes[idx][i];
        dialPad(roq,ans+code);
    }
}
    vector<string> letterCombinations(string str) {
        if(str.length()==0){
            return res;
        }
        dialPad(str,"");
        return res;
    }
};
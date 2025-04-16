class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
       vector<string> res;
       sort(words.begin(), words.end(), [](const std::string &a, const std::string &b) {return a.length() < b.length();});
       for(int i=0;i<words.size();i++){
        for(int j=i+1;j<words.size();j++){
            if(words[j].contains(words[i])){
                res.push_back(words[i]);break;
            }
        }
       }
       return res;
    }
};
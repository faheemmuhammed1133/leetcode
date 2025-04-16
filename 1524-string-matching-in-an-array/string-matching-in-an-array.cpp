class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
       vector<string> res;
       sort(words.begin(), words.end());
       for(int i=0;i<words.size();i++){
        for(int j=0;j<words.size();j++){
            if(i!=j && words[j].contains(words[i])){
                res.push_back(words[i]);
                break;
            }
        }
       }
       return res;
    }
};
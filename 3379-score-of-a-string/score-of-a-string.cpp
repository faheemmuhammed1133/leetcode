class Solution {
public:
    int scoreOfString(string s) {
        vector<int> arr;
        for(char i:s){
            arr.push_back(int(i));
        }
        int score=0;
        for(int i=0;i<s.size()-1;i++){
            score+=abs(arr[i]-arr[i+1]);
        }
        return score;
    }
};
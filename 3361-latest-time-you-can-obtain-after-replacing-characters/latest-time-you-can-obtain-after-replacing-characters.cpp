class Solution {
public:
    string findLatestTime(string s) {
        vector<int> ind;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                ind.push_back(i);c++;
            }
        }
        for(int i=0;i<ind.size();i++){
            switch(ind[i])
            {
            case 0:
                if(s[1]!='1' && s[1]!='?' && s[1]!='0'){
                    s[0]='0';
                }else{
                    s[0]='1';
                }
                break;
            case 1:
                if(s[0]!='1' ){
                    s[1]='9';
                }else{
                    s[1]='1';
                }
                break;
            // true from here ..
            case 3:
                s[3]='5';
                break;
            case 4:
                s[4]='9';
                break;
            default:
                cout<<"invalid ! ";
        }

    }
        
        return s;
    }
};
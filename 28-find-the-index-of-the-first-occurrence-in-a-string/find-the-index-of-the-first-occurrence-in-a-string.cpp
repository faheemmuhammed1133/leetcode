class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size(),res=-1;
        for (int i=0;i<n;i++){
            string str= haystack.substr(i,m);
            if(str==needle){
                res=i;
                break;
            }
        }
        
        
        
        return res;
        // return haystack.find(needle);
    }
};
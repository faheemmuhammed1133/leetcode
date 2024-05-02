class Solution {
public:
    int singleNumber(vector<int>& n) {
        if(n.size()==1){
            return n[0];
        }
        sort(n.begin(),n.end());
        int res= n[0];
        for(int i=1;i<n.size();i++){
            if(res==n[i]){
                res=n[i+1];i++;
            }
          
        }
       
        return res;
    }
};
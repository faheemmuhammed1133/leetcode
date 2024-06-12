class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){ 
            return true;
        }
        for(long int i=2;i<=n;i*=2){
            // if(i*2>=INT_MAX){
            //     return false;
            // }
            if(i==n){
                return true;
            }
        }
        return false;
    }
};
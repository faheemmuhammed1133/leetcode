class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1 || n==4){return true;}
        for(long int i=4;i<=n/4;i*=4){
            if(i*4==n){
                return true;
            }
        }
        return false;
    }
};
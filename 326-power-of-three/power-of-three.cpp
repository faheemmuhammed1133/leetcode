class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1 || n==3){return true;}
        for(long int i=3;i<=n/3+1;i*=3){
            if(i*3==n){
                return true;
            }
        }
        return false;
    }
};
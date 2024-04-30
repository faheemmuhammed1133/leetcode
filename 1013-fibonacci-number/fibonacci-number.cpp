class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int f=0;
        int s=1;
        int t=f+s;
        for(int i=2;i<=n;i++){
            t=f+s;
            f=s;
            s=t;
        }
        return t;
        
    }
};
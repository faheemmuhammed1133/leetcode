class Solution {
public:
        int f=0;
        int s=0;
        int t=1;

    int fib(int n) {
        if(n<=1){
            return n;
        }
        if(n>0){
            f=s;
            s=t;
            t=f+s;
            n--;
            fib(n);
        }
        return t;
        
    }
};
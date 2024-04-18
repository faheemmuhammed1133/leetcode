class Solution {
public:
    int climbStairs(int n) {
        int steps[n+1];
        steps[0]=1;
        steps[1]=1;
        int i=2;
        while(i<=n){
                steps[i]=steps[i-1]+steps[i-2];i++;
            }
        return steps[n];
    }
};
class Solution {
public:
    int mySqrt(int x) {
        for(int i=0;i<=x/2+1;i++){
            if((i)*(i)>=x ){ 
                if((i)*(i)!=x){
                    return i-1;
                }
            
                return i;
            }
            if(i==46340){
                return i;
            }   
        }
        return 1;
    }
};
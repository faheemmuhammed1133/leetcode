class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int carry=0;
        vector<int> dgt;

        for(int i=num.size()-1;i>=0 || k>0;i--){

                int d=k%10;
                k=k/10;
                int sum=d+carry;
                if(i>=0 ){
                    sum+=num[i];
                }
                dgt.push_back(sum%10);
                carry=sum/10;
        }

        if(carry!=0){
            dgt.push_back(carry);
        }

        reverse(dgt.begin(),dgt.end());

        return  dgt;
    }
};
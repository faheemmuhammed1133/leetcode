class Solution {
public:
    string intToRoman(int num) {
        vector<string> stack;
        string res="";
        int count=1;
        // converting and adding into stack
        while(num!=0){
            int temp=num%10;
            // cout<<num%10+0;
            if(count<10){
                if(temp==1){
                    stack.push_back("I");
                }else if(temp==2){
                    stack.push_back("II");
                }else if(temp==3){
                    stack.push_back("III");
                }else if(temp==4){
                    stack.push_back("IV");
                }else if(temp==5){
                    stack.push_back("V");
                }else if(temp==6){
                    stack.push_back("VI");
                }else if(temp==7){
                    stack.push_back("VII");
                }else if(temp==8){
                    stack.push_back("VIII");
                }else if(temp==9){
                    stack.push_back("IX");
                }
            }
            else if (count<100){
                if(temp==1){
                    stack.push_back("X");
                }else if(temp==2){
                    stack.push_back("XX");
                }else if(temp==3){
                    stack.push_back("XXX");
                }else if(temp==4){
                    stack.push_back("XL");
                }else if(temp==5){
                    stack.push_back("L");
                }else if(temp==6){
                    stack.push_back("LX");
                }else if(temp==7){
                    stack.push_back("LXX");
                }else if(temp==8){
                    stack.push_back("LXXX");
                }else if(temp==9){
                    stack.push_back("XC");
                }
            }else if(count<1000){
                if(temp==1){
                    stack.push_back("C");
                }else if(temp==2){
                    stack.push_back("CC");
                }else if(temp==3){
                    stack.push_back("CCC");
                }else if(temp==4){
                    stack.push_back("CD");
                }else if(temp==5){
                    stack.push_back("D");
                }else if(temp==6){
                    stack.push_back("DC");
                }else if(temp==7){
                    stack.push_back("DCC");
                }else if(temp==8){
                    stack.push_back("DCCC");
                }else if(temp==9){
                    stack.push_back("CM");
                }
            }else if(count==1000){
                if(temp==1){
                    stack.push_back("M");
                }else if(temp==2){
                    stack.push_back("MM");
                }else if(temp==3){
                    stack.push_back("MMM");
                }
            }
            count*=10;
            num/=10;
        }
        // backing to string ;
        int l=stack.size();
        for(int i=0;i<l;i++){
            // cout<<i;
            // cout<<stack[i];
            res+=stack[l-i-1];
        }
        return res;


    }
};
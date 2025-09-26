class Solution {
public:

    int getMax(const std::map<char,int>& m) {
    int  max = 0; // default
    for (auto& [ch, count] : m) {
        if (count > max) {
            max = count;
        }
    }
    return max;
}


    int maxFreqSum(string s) {

        map<char, int> vovel;
        map<char, int> cons;
        for (char c : s) {
            if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' ||
                c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') 
            {
                vovel[c]++;
            }else{
                cons[c]++;
            }
        }


        return getMax(vovel)+getMax(cons);
    }
};
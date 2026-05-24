class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char,int>ump;
        for(auto c = 'A' ; c <= 'Z' ; c++) {
            ump[c] = 2;
        }
        for(auto c = 'a' ; c <= 'z' ; c++) {
            ump[c] = 1;
        }
        for(auto c = '0' ; c <= '9'; c++) {
            ump[c] = 3;
        }
        ump['!'] = 5, ump['@'] = 5, ump['#'] = 5, ump['$'] = 5;
        int retVal = 0;
        for(auto& c: password) {
            retVal += ump[c];
            ump[c] = 0;
        }
        return retVal;
    }
};
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lenS = s.length(), lenT = t.length(), i = 0;
        for(int j = 0 ; j < lenT && i < lenS; j++) {
            if(s[i] == t[j]) {
                i++;
            }
        }
        return i == lenS;
    }
};
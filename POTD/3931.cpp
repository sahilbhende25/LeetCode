class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int len = s.length();
        for(int i = 0 ; i < len - 1 ; i++) {
            if(abs(s[i]-s[i+1])>2) return false;
        }
        return true;
    }
};
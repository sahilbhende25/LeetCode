class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<int,int>ump;
        for(auto&c : word) {
            ump[c - 'A']++;
        }
        int cnt = 0;
        for(int i = 0 ; i < 26 ; i++) {
            if(ump[i]>0 && ump[i+32]>0) {
                cnt++;
            }
        }
        return cnt;
    }
};
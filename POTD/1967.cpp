class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for(auto&pattern : patterns) {
            if(word.find(pattern) != -1) {
                cnt++;
            }
        }
        return cnt;
    }
};
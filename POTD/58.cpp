class Solution {
public:
    int lengthOfLastWord(string s) {
        int prevLen = 0, currLen = 0;
        for(auto& c : s) {
            if(c==' ') {
                currLen = 0;
            }
            else {
                currLen++;
                prevLen = currLen;
            }
        }
        return prevLen;
    }
};
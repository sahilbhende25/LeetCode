class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length();
        len--;
        int rank = 0;
        for(int i = len ; i >= 0 ; i--) {
            rank += pow(26,i) * ((columnTitle[len-i] - 'A') + 1);
        }
        return rank;
    }
};
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int cntB = 0, cntA = 0, cntL = 0, cntO = 0, cntN = 0;
        for(auto&c : text) {
            if(c == 'b') {
                cntB++;
            }
            else if(c == 'a') {
                cntA++;
            }
            else if(c == 'l') {
                cntL++;
            }
            else if(c == 'o') {
                cntO++;
            }
            else if(c == 'n') {
                cntN++;
            }
        }
        cntL /= 2;
        cntO /= 2;
        return min(cntB,min(cntA,min(cntL,min(cntO,cntN))));
    }
};
class Solution {
public:
    bool judgeCircle(string moves) {
        int cntX = 0, cntY=0;
        for(auto&move : moves) {
            if(move=='U') {
                cntY++;
            }
            else if (move=='D'){
                cntY--;
            }
            else if (move=='L') {
                cntX++;
            }
            else {
                cntX--;
            }
        }
        return cntX==0 && cntY==0;
    }
};
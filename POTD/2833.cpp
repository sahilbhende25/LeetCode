class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt_ = 0;
        int cntDir = 0;
        for(auto& move: moves) {
            if(move=='_') cnt_++;
            else if(move=='L') cntDir++;
            else cntDir--;
        }
        return cnt_ + abs(cntDir);
    }
};
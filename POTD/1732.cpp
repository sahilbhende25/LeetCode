class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = 0, currAlt = 0;
        for(auto&delta : gain) {
            currAlt += delta;
            maxAlt = max(maxAlt,currAlt);
        }
        return maxAlt;
    }
};
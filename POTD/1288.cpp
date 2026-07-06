class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[&](const vector<int>& a, const vector<int>& b) {
            if(a[0] == b[0]) {
                return a[1] >= b[1];
            }
            return a[0] < b[0];
        });
        int cnt = 0, sz = intervals.size(), maxEnd = intervals[0][1];
        for(int i = 1 ; i < sz ; i++) {
            maxEnd = max(maxEnd,intervals[i-1][1]);
            if(intervals[i][1] <= maxEnd) {
                cnt++;
            }
        }
        return sz - cnt;
    }
};
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if(nums.size()<3) return -1;
        vector<vector<int>>numIdx;
        for(int i = 0 ; i < nums.size() ; i++) {
            numIdx.push_back({nums[i],i});
        }
        sort(numIdx.begin(),numIdx.end());
        int ans = INT_MAX;
        for(int i = 0 ; i < numIdx.size() - 2 ; i++) {
            if(numIdx[i][0]==numIdx[i+1][0] && numIdx[i+1][0]==numIdx[i+2][0]) {
                ans = min(ans, 2*(numIdx[i+2][1]-numIdx[i][1]));
            }
        }
        return ans > 1e9 ? -1 : ans;
    }
};
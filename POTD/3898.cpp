class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans;
        for(auto&row : matrix) {
            int degree = accumulate(row.begin(),row.end(),0);
            ans.push_back(degree);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftSum;
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            leftSum.push_back(sum);
            sum+=nums[i];
        }
        sum = 0;
        vector<int>ans;
        for(int i = nums.size()-1 ; i >= 0 ; i--) {
            ans.push_back(abs(sum-leftSum[i]));
            sum += nums[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
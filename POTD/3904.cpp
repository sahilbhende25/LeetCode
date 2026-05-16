class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>maxTillNow;
        int maxNum = 0;
        for(auto&num : nums) {
            if(num>=maxNum) {
                maxNum = num;
            }
            maxTillNow.push_back(maxNum);
        }
        int ans = nums.size();
        maxNum = INT_MAX;
        for(int i = nums.size() - 1 ; i >= 0 ; i--) {
            if(nums[i]<=maxNum) {
                maxNum = nums[i];
            }
            if(maxTillNow[i] - maxNum <= k) {
                ans = i;
            }
        }
        return ans == nums.size() ? -1 : ans;
    }
};
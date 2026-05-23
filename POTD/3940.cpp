class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        int low = 0;
        for(int high = 0 ; high < nums.size() ; high++) {
            if(nums[low] == nums[high] && high-low+1 <= k) {
                ans.push_back(nums[low]);
            }
            else if(nums[low] == nums[high] && high-low+1 > k) {
                continue;
            }
            else {
                low = high;
                ans.push_back(nums[low]);
            }
        }
        return ans;
    }
};
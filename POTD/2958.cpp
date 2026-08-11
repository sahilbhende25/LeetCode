class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left = 0, maxLen = 0;
        unordered_map<int,int>ump;
        for(int right = 0 ; right < nums.size() ; right++) {
            ump[nums[right]]++;
            if(ump[nums[right]]>k) {
                while(ump[nums[right]]>k) {
                    ump[nums[left]]--;
                    left++;
                }
            }
            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
    }
};
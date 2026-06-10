class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for(auto&num : nums) {
            if(num==val) {
                cnt++;
            }
        }
        int currIdx = 0;
        int checkIdx = 0;
        while(checkIdx<nums.size()) {
            if(nums[checkIdx]==val) {
                checkIdx++;
            }
            else {
                nums[currIdx] = nums[checkIdx];
                currIdx++;
                checkIdx++;
            }
        }
        return nums.size()-cnt;
    }
};
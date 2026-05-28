class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int currIdx = nums.size()-1, cnt0 = 0;
        while(currIdx >= 0) {
            if(nums[currIdx] == 0) {
                cnt0++;
            }
            currIdx--;
        }
        currIdx = nums.size() - 1;
        int temp = cnt0;
        while(temp > 0) {
            if(nums[currIdx] == 0) {
                cnt0--;
            }
            temp--;
            currIdx--;
        }
        return cnt0;
    }
};
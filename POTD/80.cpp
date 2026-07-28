class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 0, left = 0, right = 0, len = nums.size(), k = 0;
        while(right < len) {
            if(nums[right]==nums[left]) {
                right++;
            }
            else {
                nums[pos] = nums[left];
                if((right-left)>1) {
                    k++;
                    pos++;
                    nums[pos] = nums[left];
                }
                k++;
                left=right;
                pos++;
            }
        }
        nums[pos] = nums[left];
        k++;
        if((right-left)>1) {
            k++;
            pos++;
            nums[pos] = nums[left];
        }
        return k;
    }
};
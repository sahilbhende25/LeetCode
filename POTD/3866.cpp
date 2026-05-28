class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(auto&num : nums) {
            ump[num]++;
        }
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i]%2==0 && ump[nums[i]]==1) {
                return nums[i];
            }
        }
        return -1;
    }
};
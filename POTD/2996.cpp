class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int i = 1;
        unordered_set<int>us(nums.begin(),nums.end());
        for( ; i < nums.size() ; i++) {
            if(nums[i]==nums[i-1]+1) {
                sum += nums[i];
            }
            else {
                break;
            }
        }
        while(us.contains(sum)) {
            sum++;
        }
        return sum;
    }
};
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff = INT_MAX, sum = INT_MAX;
        for(int i = 0 ; i < nums.size() - 2 ; i++) {
            for(int j = i+1 ; j < nums.size() - 1 ; j++) {
                int valFind = target - nums[i] - nums[j];
                int idx = lower_bound(nums.begin()+j+1,nums.end(),valFind) - nums.begin();
                if(idx == j+1) {
                    if(abs(nums[i] + nums[j] + nums[idx] - target)<diff) {
                        sum = nums[i] + nums[j] + nums[idx];
                        diff = abs(nums[i] + nums[j] + nums[idx] - target);
                    }
                }
                else if(idx>=nums.size()){
                    if(abs(nums[i] + nums[j] + nums[idx-1] - target)<diff) {
                        sum = nums[i] + nums[j] + nums[idx-1];
                        diff = abs(nums[i] + nums[j] + nums[idx-1] - target);
                    }
                }
                else {
                    if(abs(nums[i] + nums[j] + nums[idx] - target)<diff) {
                        sum = nums[i] + nums[j] + nums[idx];
                        diff = abs(nums[i] + nums[j] + nums[idx] - target);
                    }
                    if(abs(nums[i] + nums[j] + nums[idx-1] - target)<diff) {
                        sum = nums[i] + nums[j] + nums[idx-1];
                        diff = abs(nums[i] + nums[j] + nums[idx-1] - target);
                    }
                }
            }
        }
        return sum;
    }
};
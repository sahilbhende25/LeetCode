class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int maxTillNow = 0;
        map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] > maxTillNow) {
                mp[i] = nums[i];
                maxTillNow = nums[i];
            }
        }
        maxTillNow = 0;
        for(int i = nums.size() - 1 ; i >= 0 ; i--) {
            if(nums[i] > maxTillNow) {
                mp[i] = nums[i];
                maxTillNow = nums[i];
            }
        }
        vector<int>ans;
        for(auto&[idx,num] : mp) {
            ans.push_back(num);
        }
        return ans;
    }
};
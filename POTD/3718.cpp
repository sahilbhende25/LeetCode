class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        for(auto&num : nums) {
            ump[num] = 1;
        }
        for(int i = k ; i <= 200000 ; i += k) {
            if(ump[i]==0) {
                return i;
            }
        }
        return -1;
    }
};
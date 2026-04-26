class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>ump;
        for(int i = 0 ; i < nums.size();i++) {
            ump[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        for(auto&[num,indices] : ump) {
            if(indices.size()>=3) {
                for(int i = 0 ; i < indices.size()-2 ; i++) {
                    ans = min(ans,(indices[i+2]-indices[i+1]) + (indices[i+1]-indices[i]) + (indices[i+2]-indices[i]));
                }
            }
        }
        return ans > 1e9 ? -1 : ans;
    }
};
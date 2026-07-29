class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for(auto&num : nums) {
            if(num==0) {
                cnt0++;
            }
            else if(num==1) {
                cnt1++;
            }
            else {
                cnt2++;
            }
        }
        for(auto&num : nums) {
            if(cnt0>0) {
                num = 0;
                cnt0--;
            }
            else if(cnt1>0) {
                num=1;
                cnt1--;
            }
            else {
                num=2;
                cnt2--;
            }
        }
    }
};
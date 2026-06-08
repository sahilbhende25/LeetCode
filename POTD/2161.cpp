class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        queue<int>lessPivot;
        queue<int>morePivot;
        int pivCnt = 0;
        for(auto&num : nums) {
            if(num<pivot) {
                lessPivot.push(num);
            }
            else if(num>pivot) {
                morePivot.push(num);
            }
            else {
                pivCnt++;
            }
        }
        int i = 0;
        while(!lessPivot.empty()) {
            nums[i] = lessPivot.front(); lessPivot.pop();
            i++;
        }
        while(pivCnt>0) {
            nums[i] = pivot;
            pivCnt--;
            i++;
        }
        while(!morePivot.empty()) {
            nums[i] = morePivot.front(); morePivot.pop();
            i++;
        }
        return nums;
    }
};
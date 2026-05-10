class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for(auto&num : nums) {
            while(num) {
                if(num%10 == digit) cnt++;
                num /= 10;
            }
        }
        return cnt;
    }
};
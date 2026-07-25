class Solution {
public:
    int maxProduct(int n) {
        vector<int>digits(10);
        while(n) {
            digits[n%10]++;
            n/=10;
        }
        int ans = 1, cntUsed = 0;
        for(int i = 9 ; i >= 0 ;i--) {
            if(cntUsed==2) {
                break;
            }
            if(digits[i]>0) {
                ans *= i;
                digits[i]--;
                i++;
                cntUsed++;
            }
        }
        return ans;
    }
};
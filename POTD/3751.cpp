class Solution {
public:

    int waviness(int num) {
        vector<int>digits;
        while(num>0) {
            digits.push_back(num%10);
            num/=10;
        }
        if(digits.size()<3) return 0;
        int cnt = 0;
        for(int i = 1 ; i < digits.size() - 1 ; i++) {
            if(digits[i]>digits[i+1] && digits[i]>digits[i-1]) {
                cnt++;
            }
            else if(digits[i]<digits[i+1] && digits[i]<digits[i-1]) {
                cnt++;
            }
        }
        return cnt;
    }

    int totalWaviness(int num1, int num2) {
        int sum = 0;
        for(int i = num1 ; i <= num2 ; i++) {
            sum += waviness(i);
        }
        return sum;        
    }
};
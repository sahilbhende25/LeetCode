class Solution {
public:
    int rotatedDigits(int n) {
        int cnt = 0;
        for(int i = 1 ; i <= n ; i++) {
            int temp = i;
            bool skip = false, hasChange = false;
            while(temp) {
                int rem = temp%10;
                if(rem==3 || rem==4 || rem==7) {
                    skip = true;
                }
                if(rem==2 || rem==5 || rem==6 || rem==9) {
                    hasChange = true;
                }
                temp/=10;
            }
            if(!skip && hasChange) cnt++;
        }
        return cnt;
    }
};
class Solution {
public:
    int uniquePaths(int m, int n) {
        long long total = m-1+n-1;
        long long mini = min(m-1,n-1);
        if(mini==0) return 1;
        long long ans = 1;
        long long loop = mini;
        for(int i = 1 ; i <= loop ; i++) {
            ans *= total;
            total--;
            ans /= i;
        }
        return (int) ans;
    }
};
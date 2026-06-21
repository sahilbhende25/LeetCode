class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int cnt = 0;
        for(auto&cost : costs) {
            if(cost > coins) {
                return cnt;
            }
            else if(cost==coins) {
                cnt++;
                return cnt;
            }
            coins -= cost;
            cnt++;
        }
        return cnt;
    }
};
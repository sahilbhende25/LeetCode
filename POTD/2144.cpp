class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int minCost = 0;
        int cntr = cost.size() - 1;
        sort(cost.begin(),cost.end());
        while(cntr >= 0) {
            if(cntr >= 0) {
                minCost += cost[cntr];
                cntr--;
            }
            if(cntr >= 0) {
                minCost += cost[cntr];
                cntr--;
            }
            cntr--;
        }
        return minCost;
    }
};
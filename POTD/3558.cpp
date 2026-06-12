class Solution {
public:

    static constexpr long long MOD = 1000000007;

    long long modPow(long long base, long long exp) {
        long long res = 1;
        while (exp > 0) {
            if (exp & 1)
                res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return res;
    }

    int assignEdgeWeights(vector<vector<int>>& edges) {
        
        unordered_map<int,vector<int>>fromTo;
        for(auto&edge : edges) {
            fromTo[edge[0]].push_back(edge[1]);
            fromTo[edge[1]].push_back(edge[0]);
        }
        queue<int>q;
        q.push(1);
        int cnt = 0;
        unordered_map<int,int>visited;
        visited[1] = 1;
        while(!q.empty()) {
            int sz = q.size();
            for(int i = 0 ; i < sz ; i++) {
                int num = q.front(); q.pop();
                for(auto&node : fromTo[num]) {
                    if(!visited[node]) {
                        visited[node] = 1;
                        q.push(node);
                    }
                }
            }
            cnt++;
        }
        return (int)modPow(2, cnt - 2);
    }
};
class Solution {

private:
    bool isValidCell(int &i, int &j, int &n) {
        return i >= 0 && i < n && j >= 0 && j < n;
    }

    vector<vector<int>> dir = {{0,1} , {0,-1}, {1,0}, {-1,0}};

    bool isValidSafeNess(vector<vector<int>>&grid, int minSafeness) {
        int n = grid.size();
        if(grid[0][0] < minSafeness || grid[n-1][n-1] < minSafeness) {
            return false;
        }
        queue<pair<int,int>>q;
        vector<vector<bool>>visited(n,vector<bool>(n,false));
        q.push({0,0});
        visited[0][0] = true;
        while(!q.empty()) {
            int sz = q.size();
            for(int i = 0 ; i < sz ; i++) {
                auto curr = q.front();
                q.pop();
                if(curr.first == n-1 && curr.second == n-1) {
                    return true;
                }
                for(auto&d : dir) {
                    int di = curr.first + d[0];
                    int dj = curr.second + d[1];
                    if(isValidCell(di,dj,n) && !visited[di][dj] && grid[di][dj] >= minSafeness) {
                        visited[di][dj] = true;
                        q.push({di,dj});
                    }
                }
            }
        }
        return false;
    }
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int,int>>multiSourceQueue;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                if(grid[i][j] == 1) {
                    multiSourceQueue.push({i,j});
                    grid[i][j] = 0;
                }
                else {
                    grid[i][j] = -1;
                }
            }
        }
        while(!multiSourceQueue.empty()) {
            int sz = multiSourceQueue.size();
            for(int i = 0 ; i < sz ; i++) {
                auto curr = multiSourceQueue.front(); 
                multiSourceQueue.pop();
                for(auto&d : dir) {
                    int di = curr.first + d[0];
                    int dj = curr.second + d[1];
                    if(isValidCell(di,dj,n) && grid[di][dj] == -1) {
                        grid[di][dj] = grid[curr.first][curr.second] + 1;
                        multiSourceQueue.push({di,dj});
                    }
                }
            }
        }
        int start = 0, end = 0, res = -1;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                end = max(end,grid[i][j]);
            }
        }
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(isValidSafeNess(grid,mid)) {
                res = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return res;
    }
};
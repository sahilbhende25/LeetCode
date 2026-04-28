class Solution {
public:

    int dist(string&word, int idx1, int idx2) {
        if(idx1==-1) {
            return 0;
        }
        int c1 = word[idx1] - 'A';
        int c2 = word[idx2] - 'A';
        int x1 = c1/6, y1 = c1%6;
        int x2 = c2/6, y2 = c2%6;
        return abs(x2-x1) + abs(y2-y1);
    }

    int rec(string& word, int prev1, int prev2, int curr, vector<vector<vector<int>>>&v) {
        if(curr >= word.length()) {
            return 0;
        }
        if(v[prev1+1][prev2+1][curr]<1e9) return v[prev1+1][prev2+1][curr];
        int jmpCost1 = dist(word,prev1,curr) + rec(word,curr,prev2,curr+1,v);
        int jmpCost2 = dist(word,prev2,curr) + rec(word,prev1,curr,curr+1,v);
        return v[prev1+1][prev2+1][curr] = min(jmpCost1,jmpCost2);
    }

    int minimumDistance(string word) {
        int idx1 = -1, idx2 = -1, curr = 0, n = word.length();
        vector<vector<vector<int>>> v(n + 1, vector<vector<int>>(n + 1, vector<int>(n, INT_MAX)));
        int ans = rec(word,idx1,idx2,curr,v);
        return ans;
    }
};
class Solution {
public:

    void fillThisCol (int row, int col, int cntGems, vector<vector<char>>&ans) {
        cout<<cntGems<<"\n";
        while(cntGems > 0) {
            ans[row][col] = '#';
            cntGems--;
            row--;
        }
    }

    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        vector<vector<char>>ans(boxGrid[0].size(),vector<char>(boxGrid.size(),'.'));
        for(int row = boxGrid.size() - 1 ; row >= 0 ; row--) {
            int cntGems = 0;
            for(int col = 0 ; col < boxGrid[0].size() ; col++) {
                if(boxGrid[row][col] == '#') {
                    cntGems++;
                }
                if(boxGrid[row][col] == '*' || col == boxGrid[0].size() - 1) {
                    if(boxGrid[row][col] == '*') {
                        ans[col][boxGrid.size() - 1 - row] = '*';
                        fillThisCol(col - 1, boxGrid.size() - 1 - row, cntGems ,ans);
                    }
                    else {
                        fillThisCol(col, boxGrid.size() - 1 - row, cntGems ,ans);
                    }
                    cntGems = 0;
                }
            }
        }
        return ans;
    }
};
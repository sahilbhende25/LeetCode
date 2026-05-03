class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(auto&row : matrix) {
            reverse(row.begin(),row.end());
        }
        int sz = matrix.size();
        for(int i = 0 ; i < sz ; i++) {
            for(int j = 0 ; j < sz - i - 1 ; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[sz-1-j][sz-1-i];
                matrix[sz-1-j][sz-1-i] = temp;
            }
        }
    }
};
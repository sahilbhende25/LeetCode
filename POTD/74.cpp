class Solution {
public:
    bool binarySearch(vector<vector<int>>& matrix, int target, int row) {
        int n = matrix[0].size();
        int st = 0, end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (target == matrix[row][mid])
                return true;
            else if (target > matrix[row][mid])
                st = mid + 1;
            else
                end = mid - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int sRow = 0, eRow = m - 1;

        while (sRow <= eRow) {
            int mRow = sRow + (eRow - sRow) / 2;

            if (target >= matrix[mRow][0] && target <= matrix[mRow][n - 1]) {
                return binarySearch(matrix, target, mRow);
            } else if (target >= matrix[mRow][n - 1]) {
                sRow = mRow + 1;
            } else {
                eRow = mRow - 1;
            }
        }
        return false;
    }
};
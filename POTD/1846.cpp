class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        arr[0] = 1;
        for(int i = 0 ; i < n ; i++) {
            if(i>0 && arr[i]-arr[i-1]>1) {
                arr[i] = arr[i-1] + 1;
            }
        }
        return arr[n-1];
    }
};
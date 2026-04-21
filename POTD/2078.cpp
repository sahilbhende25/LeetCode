class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int low = 0 , high = colors.size()-1, maxx = 0;
        while(high >= low) {
            if(colors[high] != colors[low]) {
                maxx = max(maxx,high-low);
            }
            high--;
        }
        high = colors.size()-1;
        while(low <= high) {
            if(colors[high] != colors[low]) {
                maxx = max(maxx,high-low);
            }
            low++;
        }
        return maxx;
    }
};
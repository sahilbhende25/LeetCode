class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen = INT_MAX;
        if(strs.size()==1) return strs[0];
        for(auto&str : strs) {
            int len = str.length();
            if(len<minLen) {
                minLen = len;
            }
        }
        string ans = "";
        for(int i = 0 ; i < minLen ; i++) {
            bool isMismatch = false;
            for(int j = 1 ; j < strs.size() ; j++) {
                if(strs[j][i]!=strs[j-1][i]) {
                    isMismatch = true;
                    break;
                }
            }
            if(!isMismatch) {
                ans += strs[0][i];
            }
            else {
                break;
            }
        }
        return ans;

    }
};
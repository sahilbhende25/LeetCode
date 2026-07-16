class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        int curr = groups[0];
        ans.push_back(words[0]);
        for(int i = 1 ; i < groups.size() ; i++) {
            if(groups[i]!=curr) {
                ans.push_back(words[i]);
                curr = groups[i];
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        vector<string>str;
        for(int i = 1 ; i <= n ; i++) {
            str.push_back(to_string(i));
        }
        sort(str.begin(),str.end());
        for(auto&s : str) {
            ans.push_back(stoi(s));
        }
        return ans;
    }
};
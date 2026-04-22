class Solution {
public:

    int dist(string &word1, string &word2) {
        int diff = 0;
        for(int i = 0 ; i < word1.length() ; i++) {
            if(word1[i]!=word2[i]) {
                diff++;
            }
        }
        return diff;
    }

    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
        for(auto&query: queries) {
            for(auto&word : dictionary) {
                if(dist(query,word)<=2) {
                    ans.push_back(query);
                    break;
                }
            }
        }
        return ans;
    }
};
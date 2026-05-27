class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>charIdx;
        for(char c = 'a', C = 'A' ; c <= 'z' ; c++ , C++) {
            charIdx[c] = -1;
            charIdx[C] = -1;
        }
        for(int i = 0 ; i < word.length() ; i++) {
            if(word[i]>='a') {
                charIdx[word[i]] = i;
            }
            else if(word[i] < 'a' && charIdx[word[i]]==-1) {
                charIdx[word[i]] = i;
            }
        }
        int cnt = 0;
        for(char i = 'a' , I = 'A' ; i <= 'z' ; i++, I++) {
            if(charIdx[i] >= 0 && charIdx[I] >= 0 && charIdx[i] < charIdx[I]) {
                cnt++;
            }
        }
        return cnt;
    }
};
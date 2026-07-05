class Solution {
public:
    bool hasAllChar(vector<int>&freq) {
        if(!freq[0] || !freq[1] || !freq[2]) {
            return false;
        }
        return true;
    }

    int numberOfSubstrings(string s) {
        int len = s.length();
        int left = 0, right = 0;
        vector<int>freq(3,0);
        int total = 0;
        while(right < len) {
            char curr = s[right];
            freq[curr - 'a']++;

            while(hasAllChar(freq)) {
                total += len - right;

                char leftChar = s[left];
                freq[leftChar - 'a']--;
                left++;
            }
            right++;
        }
        return total;
    }
};
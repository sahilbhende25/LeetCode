class Solution {
public:
    int compareVersion(string version1, string version2) {
        int idx1 = 0, idx2 = 0, len1 = version1.length(), len2 = version2.length();
        while(idx1 < len1 || idx2 < len2) {
            int num1 = 0, num2 = 0;
            while(idx1 < len1 && version1[idx1]!='.') {
                num1 = (num1*10) + (version1[idx1] - '0');
                idx1++;
            }
            while(idx2 < len2 && version2[idx2]!='.') {
                num2 = (num2*10) + (version2[idx2] - '0');
                idx2++;
            }
            idx1++;
            idx2++;
            if(num1>num2) {
                return 1;
            }
            else if (num2>num1){
                return -1;
            }
        }
        return 0;
    }
};
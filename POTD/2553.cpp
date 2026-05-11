#include<stdcpp.h>
using namespace std;

int main() {
    vector<int>ans;
    vector<int>curr;
    vector<int>nums;
    for(auto&num : nums) {
        while(num) {
            curr.push_back(num%10);
            num/=10;
        }
        reverse(curr.begin(),curr.end());
        for(auto&digit : curr) {
            ans.push_back(digit);
        }
    }
    return ans;
    return 0;
}
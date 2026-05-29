class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for(auto&num : nums) {
            cout<<num<<" ";
        }
        cout<<"\n";
        for(auto&num : nums) {
            num = num % k;
        }
        for(auto&num : nums) {
            cout<<num<<" ";
        }
        cout<<"\n";
        int minOperations = INT_MAX;
        for(int i = 0 ; i < k ; i++) {
            for(int j = 0 ; j < k ; j++) {
                if(j==i) continue;
                int currOperations = 0;
                for(int l = 0 ; l < nums.size() ; l++) {
                    //for even the val is going to be i and for odd it is going to be j
                    currOperations += l % 2 == 0 ? min((i-nums[l]+k)%k,(nums[l]-i+k)%k) : min((j-nums[l]+k)%k,(nums[l]-j+k)%k);
                
                }
                minOperations = min(minOperations,currOperations); 
            }
        }
        return minOperations;
    }
};
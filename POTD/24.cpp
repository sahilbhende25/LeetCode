/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        vector<int>nums;
        while(temp) {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        for(int i = 1 ; i < nums.size() ; i = i+2) {
            int tempNum = nums[i];
            nums[i] = nums[i-1];
            nums[i-1] = tempNum;
        }
        ListNode* l1 = new ListNode();
        temp = l1;
        for(int i = 0 ; i < nums.size() ; i++) {
            ListNode* l2 = new ListNode(nums[i]);
            l1->next = l2;
            l1 = l2;
        }
        return temp->next;
    }
};
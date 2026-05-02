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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL || head->next==NULL) return head;
        int cntr = 0;
        ListNode* dummy = head;
        while(dummy) {
            cntr++;
            dummy = dummy->next;
        }
        k = k % cntr;
        if(k==0) return head;
        ListNode* left = head;
        ListNode* right = head;
        ListNode* prevl = head;
        int l = 0, r = 0;
        while(right->next) {
            if(r-l+1 < k) {
                right = right->next;
                r++;
            }
            else {
                prevl = left;
                left = left->next;
                right = right->next;
                r++;
                l++;
            }
        }
        prevl->next = NULL;
        right->next = head;
        return left;
    }
};
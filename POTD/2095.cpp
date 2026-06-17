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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL) return NULL;
        ListNode* temp = head;
        int cntr = 0;
        while(temp) {
            cntr++;
            temp = temp->next;
        }
        ListNode* ahead = head->next;
        ListNode* prev = head;
        cntr/=2;
        cntr--;
        while(cntr>0) {
            ahead = ahead->next;
            prev = prev->next;
            cntr--;
        }
        prev->next = ahead->next;
        ahead->next = NULL;
        return head;
    }
};
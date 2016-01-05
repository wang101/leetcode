/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode pre(-1);
        ListNode* pt;
        ListNode* fast;
        ListNode* slow;
        int len;
        pre.next = head;
        pt = head;
        fast = head;
        slow = &pre;
        len = 0;
        while(pt){
            len++;
            pt = pt->next;
        }
        
        for(int i=0;i<len-n;i++){
            fast = fast->next;
            slow = slow->next;
        }
        delete slow->next;
        slow->next = fast->next;
        return pre.next;
    }  
};

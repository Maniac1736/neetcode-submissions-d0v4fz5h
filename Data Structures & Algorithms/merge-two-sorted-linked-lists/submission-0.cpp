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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a = list1;
        ListNode* b = list2;
        ListNode* c = new ListNode(0);
        ListNode* d = c;
        
        while(a && b){
            if(a->val > b->val){
                d->next = b;
                b = b->next;
            }
            else {
                d->next = a;
                a = a->next;
            }
            d = d->next;
        }
        d->next = a ? a:b;
        ListNode* head = c->next;
        delete c;
        return head;
    }
};
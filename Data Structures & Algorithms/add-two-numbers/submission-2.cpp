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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* head = NULL;
        ListNode* tail = NULL;

        int carry = 0;

        while(l1 || l2 || carry){

            int sum = carry;

            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }

            ListNode* x = new ListNode();

            x->val = sum % 10;
            x->next = NULL;

            carry = sum / 10;

            if(head == NULL){

                head = x;
                tail = x;
            }

            else{

                tail->next = x;
                tail = x;
            }
        }

        return head;
    }
};
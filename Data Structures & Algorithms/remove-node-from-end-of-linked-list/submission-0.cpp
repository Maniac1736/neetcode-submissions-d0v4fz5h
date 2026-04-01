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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr) return nullptr;
        ListNode* a = head;
        int cnt = 0;
        ListNode* temp = head;
        while(temp!=nullptr){
            temp=temp->next;
            cnt++;
        }
        if(cnt == n){
            head = head->next;
            return head;
        }
        int i = 1;
        while(i < (cnt - n)){
            a = a->next;
            i++;
        }
        a->next = a->next->next;
        return head;
    }
};
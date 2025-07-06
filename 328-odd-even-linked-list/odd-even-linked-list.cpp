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
    ListNode* oddEvenList(ListNode* head) {

        // doing without using auxilary space

        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* odd = head;
        ListNode* evenhead = head->next;
        ListNode* even = head->next;


        while(even != nullptr && even->next != nullptr)
        {
            odd->next = odd->next->next; // moving node to node (even to even and odd to odd)
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }

        odd->next = evenhead; // pointing last odd node to first even node

        return head;

        
    }
};
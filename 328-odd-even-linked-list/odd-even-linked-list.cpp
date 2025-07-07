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


        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* odd = head; // first odd node
        ListNode* even = head->next; // first even node
        ListNode* feven = even;
        
        while(even!=nullptr && even->next != nullptr)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }

        // pointing last odd to first even
        odd->next = feven;

        return head;


    }
};
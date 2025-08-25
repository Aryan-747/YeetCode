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

        // using dummy node
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* dumby = new ListNode(-1);
        dumby->next = head;

        ListNode* dum = dumby;
        ListNode* curr = head;


        while(curr!=nullptr && curr->next!=nullptr)
        {
            ListNode* nextnode = curr->next;
            dum->next = nextnode;
            curr->next = nextnode->next;
            nextnode->next = curr;

            dum = curr;
            curr = curr->next;
        }






        return dumby->next;
        
    }
};
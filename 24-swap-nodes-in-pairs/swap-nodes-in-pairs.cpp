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
        
        ListNode* curr = head;

        // single node or nullptr
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        // if two nodes
        if(head->next->next == nullptr)
        {
            int data = head->val;
            head->val = head->next->val;
            head->next->val = data;

            return head;
        }



        while(curr!=nullptr && curr->next != nullptr)
        {

            int data = curr->val;
            curr->val = curr->next->val;
            curr->next->val = data;

            curr = curr->next->next;

        }

        return head;
    }
};
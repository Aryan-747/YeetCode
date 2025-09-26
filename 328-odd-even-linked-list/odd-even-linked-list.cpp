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
        
        // if single node or nullptr
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* evenhead = head->next; // evenhead;
        ListNode* oddhead = head; // oddhead


        ListNode* evenmover = evenhead;
        ListNode* oddmover = oddhead;



        while(evenmover!=nullptr && evenmover->next!=nullptr)
        {
            oddmover->next = oddmover->next->next;
            evenmover->next = evenmover->next->next;

            oddmover = oddmover->next; // moving ahead
            evenmover = evenmover->next; // moving ahead
        }


        oddmover->next = evenhead; // making connection

        return head;
        
    }
};
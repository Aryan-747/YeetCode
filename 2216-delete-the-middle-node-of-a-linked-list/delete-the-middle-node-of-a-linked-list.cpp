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

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=nullptr && fast->next !=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        if(head->next == nullptr || head == nullptr)
        {
            return nullptr;
        }

        ListNode* temp = head;

        while(temp->next != slow)
        {
            temp = temp->next;
        }

        temp->next = slow->next;

        delete slow;

        return head;
        
    }
};
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
    ListNode* removeElements(ListNode* head, int val) {


        while(head!=nullptr && head->val == val)
        {
            head = head->next;
        }

        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr!=nullptr)
        {
            if(curr->val == val)
            {
                prev->next = curr->next;
                ListNode* tobedeleted = curr;
                curr = curr->next;
                delete tobedeleted;
            }
            else
            {
            prev = curr;
            curr = curr->next;
            }
        }

        return head;
        
    }
};
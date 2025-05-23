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

        ListNode* temp = head;
        ListNode* prev = nullptr;

        int len = 0;

        while(temp!=nullptr)
        {
            temp = temp->next;
            len++;
        }

        temp = head;

        if(len-n == 0)
        {
            head = head->next;
            delete temp;

            return head;
        }

        int cnt = 0;

        while(temp!=nullptr)
        {
            if(cnt == (len-n))
            {
                prev->next = temp->next;
                delete temp;
                return head;
            }

            prev = temp;
            temp = temp->next;
            cnt++;
        }

        return head;

        
        
    }
};
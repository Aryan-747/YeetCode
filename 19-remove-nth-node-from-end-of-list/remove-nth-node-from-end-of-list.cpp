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

        int len = 1;

        while(temp!=nullptr)
        {
            temp = temp->next;
            len++;
        }

        if(len-n == 1)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;

            return head;
        }

        ListNode* temp2 = head;
        ListNode* prev = nullptr;

        int n2 = 1;
        while(temp2!=nullptr)
        {

            if(n2 == (len-n))
            {
                prev->next = temp2->next;
                delete temp2;
                return head;
            }

            prev = temp2;
            temp2 = temp2->next;
            n2++;
        }
        
        return head;
    }
};
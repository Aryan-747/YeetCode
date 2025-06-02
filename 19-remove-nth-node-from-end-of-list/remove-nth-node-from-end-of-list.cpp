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

        ListNode* lenfinder = head;
        int len = 0;

        while(lenfinder!=nullptr)
        {
            len++;    
            lenfinder = lenfinder->next;
        }

        // means we need to delete the first node
        if(n-len == 0)
        {
            ListNode* temp = head;
            head = head->next;

            delete temp;
            return head;
        }
        
        // Invalid position
        if(n>len)
        {
            return head;
        }

        ListNode* temp = head;
        ListNode* prev = nullptr;
        int cnt = 0;

        while(cnt<(len-n))
        {
            prev = temp;
            temp = temp->next;
            cnt++;
        }

        prev->next = temp->next;
        delete temp;
        return head;
        
    }
};
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

    ListNode *reversell(ListNode* secondhead)
    {
        ListNode* temp = secondhead;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;


        while(temp!=nullptr)
        {
            next = temp->next;

            temp->next = prev;

            prev = temp;
            temp = next;   
        }

        return prev;

    }


    bool isPalindrome(ListNode* head) {

        if(head->next == nullptr)
        {
            return true;
        }

        // finding middle

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next!=nullptr && fast->next->next !=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondhead = slow->next;
        secondhead = reversell(secondhead);
        ListNode* firsthead = head;

        while(secondhead != nullptr)
        {
            if(firsthead->val != secondhead->val)
            {
                reversell(secondhead); // undoing reversal
                return false;
            }
            firsthead = firsthead->next;
            secondhead = secondhead->next;
        }

        reversell(secondhead); // undoing reversal;
        return true;
        
    }
};
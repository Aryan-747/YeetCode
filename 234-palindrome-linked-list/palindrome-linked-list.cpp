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

    ListNode* reversal(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr!=nullptr)
        {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;

            curr = temp;            
        }

        return prev; // since curr points at nullptr
    }

    bool isPalindrome(ListNode* head) {


        if(head->next == nullptr) // single node (will always be a palindrome)
        {
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // finding middle
        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        
        // reversing second half

        slow = reversal(slow);

        // checking palindrome

        ListNode* temp = head;

        while(slow!=nullptr)
        {
            
            if(temp->val != slow->val)
            {
                slow = reversal(slow); // undoing reversal
                return false;
            }

            temp = temp->next;
            slow = slow->next;
        }


        slow = reversal(slow); // undoing reversal
        return true;

    }
};
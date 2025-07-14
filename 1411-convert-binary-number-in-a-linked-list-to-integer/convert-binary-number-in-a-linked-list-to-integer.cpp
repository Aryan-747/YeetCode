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
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr!=nullptr)
        {
            ListNode* temp = curr->next;
            curr->next = prev; // pointing to prev node
            prev = curr; // moving prev to curr node
            curr = temp; // moving curr to next node
        }

        return prev; // since curr points at nullptr, this prev is the new head

    }

    int getDecimalValue(ListNode* head) {

        int numba = 0;

        ListNode* temp = head;

        // we first need to reverse the linked list, so that we start from the least significant bit

        temp = reversal(temp);
    
        int powa = 0;

        while(temp!=nullptr)
        {
            numba += (int)((temp->val)*pow(2,powa));

            temp = temp->next;
            powa++;
        }  

        return numba; 
    }
};
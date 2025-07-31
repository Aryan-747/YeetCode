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

    ListNode* findmiddle(ListNode* head)
    {
        // modifying it a bit to return 1st middle in case of even number of nodes
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow; // first middle
    }

    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode(-1,nullptr);
        ListNode* temp = dummy;

        ListNode* t1 = l1;
        ListNode* t2 = l2;

        while(t1 && t2)
        {
            if(t1->val<t2->val)
            {
                temp->next = t1;
                t1 = t1->next;
            }

            else
            {
                temp->next = t2;
                t2 = t2->next;
            }

            temp = temp->next;
        }

        if(t1) // t1 is still left
        {
            temp->next = t1;
        }
        else
        {
            temp->next = t2;
        }

        return dummy->next; // new head
    }



    ListNode* sortList(ListNode* head) {

        // base case
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* lefthead = head;
        ListNode* middle = findmiddle(lefthead);
        ListNode* righthead = middle->next;
        middle->next = nullptr; // disconnecting the two divided lists

        lefthead = sortList(lefthead); // sorting left half
        righthead = sortList(righthead); // sorting right half

        return merge(lefthead,righthead);
    }
};
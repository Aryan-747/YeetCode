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
        ListNode* slow = head;
        ListNode* fast = head->next; // slight change so that first middle is returned in case of even number of nodes

        while(fast!=nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow; // middle
    }

    ListNode* merge(ListNode* list1, ListNode* list2)
    {
        ListNode* dummy = new ListNode(-1);
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* mover = dummy;

        while(t1!=nullptr && t2!=nullptr)
        {
            if(t1->val<t2->val)
            {
                mover->next = t1;
                t1 = t1->next;
                mover = mover->next;
            }

            else
            {
                mover->next = t2;
                t2 = t2->next;
                mover = mover->next;
            }
        }

        if(t1) // t1 is still left
        {
            mover->next = t1;
        }
        else
        {
            mover->next = t2;
        }

        return dummy->next; // new head;
    
    }




    ListNode* sortList(ListNode* head) {

        ListNode* lefthead = head;

        // base case

        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        // sorting using mergesort
        ListNode* middle = findmiddle(head);
        ListNode* righthead = middle->next; // other head;
        middle->next = nullptr; // removing connection

        // applying mergesort on the broken down parts recursively

        lefthead = sortList(lefthead);
        righthead = sortList(righthead);

        // merging lists
        return merge(lefthead,righthead);  

    }
};
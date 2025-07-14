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

    // finding middle using tortoise and hare algo
    ListNode* findmiddle(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head->next; // slight change, taking fast one position ahead so that first middle is returned in case of even number of nodes

        while(fast!=nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow; // middle node;
    }

    // merging lists
    ListNode* mergetwolists(ListNode* list1, ListNode* list2)
    {
        ListNode* dummy = new ListNode(-1);
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* mover = dummy;

        while(t1!=nullptr && t2!=nullptr)
        {
            if(t1->val < t2->val)
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

        // if t1 is still left

        if(t1)
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

        // most optimal sorting linked list solution;
        
        // base case
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* left = head;
        ListNode* middle = findmiddle(head);
        ListNode* right = middle->next;
        middle->next = nullptr; // disconnecting the two lists


        left = sortList(left); // sorting left
        right = sortList(right); // sorting right;

        return mergetwolists(left,right); // merging lists

    }
};
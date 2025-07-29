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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        int i = 1;
        ListNode* prev = nullptr;
        ListNode* curr = head;

        // moving towards the start point
        while(curr!=nullptr && i!=left)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }

        // storing important nodes
        ListNode* pts = prev; // pointer to start
        ListNode* start = curr; // node from where reversal starts

        prev = nullptr; // resetting prev

        while(curr!=nullptr && i!=right+1) // reversing
        {
            ListNode* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
            i++;
        }

        start->next = curr; // connecting the linked list to correct node

        if(pts!=nullptr)
        {
            pts->next = prev; // pointer to start starts pointing the correct node
        }
        else
        {
            return prev; // this means left was equal to 1, hence prev becomes new head
        }

        return head;
    }
};
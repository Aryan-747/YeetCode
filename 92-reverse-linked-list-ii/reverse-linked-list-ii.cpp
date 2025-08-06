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
        
        // edge case

        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }


        ListNode* curr = head;
        ListNode* prev = nullptr;

        // traversing to node where reversal should start


        int cnt = 1;

        while(curr!=nullptr && cnt!=left)
        {

            cnt++;
            prev = curr;
            curr = curr->next;
        }

        // storing important pointers

        ListNode* start = curr;
        ListNode* pts = prev; // pointer to start

        prev = nullptr; // resetting prev;

        // reversal algo
        while(cnt<right+1 && curr!=nullptr)
        {

            ListNode *next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
            cnt++;
        }

        start->next = curr;

        if(pts == nullptr) // left was one
        {
            return prev; // prev is new head
        }

        pts->next = prev;

        return head;
        
        
    }
};
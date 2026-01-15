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

        // Edge case

        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = nullptr;
        int cnt = 1;

        while(curr!=nullptr && cnt!=left)
        {
            cnt++;
            prev = curr;
            curr = curr->next;
        }

        // storing important pointers
        ListNode* pts = prev; // Pointer to start
        ListNode* start = curr;

        prev = nullptr; // resetting prev

        // basic reversal logic
        while(cnt<right+1 && curr!=nullptr)
        {
            ListNode* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
            cnt++;
        }

        start->next = curr;
        if(pts == nullptr) // Reversal started from first node, so prev is new head
        {
            head = prev;
            return head;
        }

        // connecting to new node
        pts->next = prev;
        return head;
    }
};
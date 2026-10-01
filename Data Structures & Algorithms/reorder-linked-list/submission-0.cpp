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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* temp = slow -> next;
        ListNode* prev = nullptr;
        slow -> next = nullptr;

        while(temp != nullptr){
            ListNode* next = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = next;
        }

        ListNode* first = head;
        ListNode* second = prev;
        ListNode* ans = first;

        while(second != nullptr){
            ListNode* next = first -> next;
            ListNode* next1 = second -> next;

            first -> next = second;
            second -> next = next;

            first = next;
            second = next1; 
        }
    }
};

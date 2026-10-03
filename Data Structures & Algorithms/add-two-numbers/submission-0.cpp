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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = l1;
        ListNode* prev = nullptr;

        while (temp != nullptr) {
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }

        ListNode* temp2 = l2;
        ListNode* prev2 = nullptr;

        while (temp2 != nullptr) {
            ListNode* next = temp2->next;
            temp2 -> next = prev2;
            prev2 = temp2;
            temp2 = next;
        }

        ListNode* newHead = prev;
        ListNode* newHead2 = prev2;

        ListNode* newHead3 = nullptr;
        ListNode* current = nullptr;

        while (newHead != nullptr && newHead2 != nullptr) {
            ListNode* new1 = new ListNode(newHead->val + newHead2->val);

            if (newHead3 == nullptr) {
                newHead3 = new1;
                current = new1;
            }

            else {
                current->next = new1;
                current = new1;
            }

            newHead = newHead->next;
            newHead2 = newHead2->next;
        }

        ListNode* tempo = newHead3;
        ListNode* prevv = nullptr;

        while(tempo != nullptr){
            ListNode* next = tempo -> next;
            tempo -> next = prevv;
            prevv = tempo;
            tempo = next;
        }
        return prevv;
    }
};

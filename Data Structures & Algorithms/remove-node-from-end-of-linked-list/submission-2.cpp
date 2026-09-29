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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head != nullptr && head->next == nullptr) {
            return nullptr;
        }
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while (temp != nullptr) {
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }

        ListNode* newHead = prev;

        if (n == 1) {
            newHead = newHead->next;
        } else {
            int count = 1;
            ListNode* before = newHead;
            while (prev != nullptr) {
                if (count == n - 1) {
                    before->next = before->next->next;
                    break;
                }
                before = before->next;
                count++;
            }
        }

        ListNode* temp2 = newHead;
        ListNode* prev2 = nullptr;

        while (temp2 != nullptr) {
            ListNode* next = temp2->next;
            temp2->next = prev2;
            prev2 = temp2;
            temp2 = next;
        }

        return prev2;
    }
};

#include<iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        while (p1 != NULL && p2 != NULL)
        {
            p1 = p1->next;
            p2 = p2->next;
        }
    }
};
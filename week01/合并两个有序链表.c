/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *p1 = l1;
    struct ListNode *p2 = l2;
    struct ListNode *aws = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *p = aws;

    while (p1 && p2) {
        if (p1->val < p2->val) {
            p->next = p1;
            p1 = p1 ? p1->next : NULL;
        } else {
            p->next = p2;
            p2 = p2 ? p2->next : NULL;
        }
        p = p->next;
    }
    if (p1) {
        p->next = p1;
    } else {
        p->next = p2;
    }
    return aws->next;
}
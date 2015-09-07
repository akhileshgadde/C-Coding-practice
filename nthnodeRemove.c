/* 

Given a linked list, remove the nth node from the end of list and return its head.
Note:
Given n will always be valid.
Try to do this in one pass.

*/

struct ListNode {
     int val;
     struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *curr, *fast, *tmp;
    int i = 0;
    curr = head;
    fast = head;
    if (head == NULL)
        return NULL;
    while (fast != NULL && i < n) /*traverse n number of times in linked list */
    {
        fast = fast -> next;
        i++;
    }
    if (fast == NULL) /* Head node is to be removed */
    {
        //tmp = head;
        return head->next;
    }

    /* not the head node */
    while (fast -> next != NULL)
    {
        fast = fast -> next;
        curr = curr-> next;
    }
    //tmp = curr->next;
    curr->next = curr->next->next;
    //free (tmp);
    return head;
}


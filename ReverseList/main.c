#include <stdio.h>

typedef struct ListNode{
    int val;
    struct ListNode *next;
}ListNode;

ListNode* reverselist(ListNode* head)
{
    if(head == NULL) return NULL;
    ListNode *new_head = NULL;
    while (head)
    {
        ListNode *next = head->next;    // 备份head->next
        head->next = new_head;          // 更新head-next
        new_head = head;                // 移动new_head
        head = next;                    // head指回备份节点
    }
    return new_head;
}

int main()
{
    ListNode a;
    ListNode b;
    ListNode c;
    ListNode d;
    ListNode e;

    a.val = 1;
    b.val = 2;
    c.val = 3;
    d.val = 4;
    e.val = 5;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    ListNode *head = &a;

    while(head){
        printf("%d ",head->val);
        head = head->next;
    }
    printf("\n");

    head = reverselist(&a);
    while(head){
        printf("%d ",head->val);
        head = head->next;
    }
    printf("\n");

    return 0;
}

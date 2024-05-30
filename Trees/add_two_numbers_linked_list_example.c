#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

void insertBeginning(struct ListNode **head, int data);
void insertEnd(struct ListNode **head, int data);
void printLinkedList(struct ListNode *head);

int main(void)
{
      // [0,8,6,5,6,8,3,5,7]
      long long n = 753865680;

      // [6,7,8,0,8,5,8,9,7]
      long long n2 = 798580876;

      struct ListNode *head = NULL;

      int c = 1;
      while (n > 0)
      {
            if (c)
            {
                  insertBeginning(&head, n%10);
                  c = 0;
                  n /= 10;
            }
            insertEnd(&head, n%10);
            n /= 10;
      }

      printLinkedList(head);

      int res = 0;
      int count = 1;

      struct ListNode *current = head;

      while (current != NULL)
      {
            res += current->val * count;
            count *= 10;
            current = current->next;
      }

      fprintf(stdout, "The value was: %d\n", res);

      return EXIT_SUCCESS;
}

void insertBeginning(struct ListNode **head, int data)
{
      struct ListNode *new = (struct ListNode*)malloc(sizeof(struct ListNode));

      // store data in new node
      new->val = data;

      // next pointer of new node will be the current head
      new->next = *head;

      // current head is the new node
      *head = new;
}

void insertEnd(struct ListNode **last, int data)
{
      struct ListNode *new = (struct ListNode*)malloc(sizeof(struct ListNode));

      // store data in new node
      new->val = data;
      
      // point to next not yet existing node
      new->next = NULL;

      // in case this is the first one
      // if (*last == NULL)
      if (*last == NULL)
      {
            *last = new;
            return;
      }

      // Create a pointer to iterate till the last node
      struct ListNode *current = *last;
      // while (current->next != NULL)
      while (current->next != NULL)
      {
            current = current->next;
      }
      // point previous last to this new node
      current->next = new;

}

void printLinkedList(struct ListNode *head)
{
      struct ListNode *current = head;

      // while not NULL
      while (current != NULL)
      {
            fprintf(stdout, "val at node: %d\n", current->val);
            current = current->next;
      }
      fprintf(stdout, "NULL\n");
}


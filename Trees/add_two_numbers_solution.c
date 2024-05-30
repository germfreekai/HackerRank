#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

void insertBeginning(struct ListNode **head, int data);
void insertEnd(struct ListNode **head, int data);
void printLinkedList(struct ListNode *head);
struct ListNode *createList(long long n);

int main(void)
{
      // [0,8,6,5,6,8,3,5,7]
      // 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
      unsigned long long n = 1000000000000000000000000000001;

      // [6,7,8,0,8,5,8,9,7]
      // 5,6,4
      unsigned long long n2 = 465;

      struct ListNode *l1 = createList(n);
      struct ListNode *l2 = createList(n2);

      fprintf(stdout, "Linked list 1: \n");
      printLinkedList(l1);
      fprintf(stdout, "Linked list 2: \n");
      printLinkedList(l2);

      unsigned long long a, b;
      a = 0;
      b = 0;

      struct ListNode *current = l1;
      unsigned long long mover = 1;
      if (current->val == 0 && current->next == NULL)
            // do nothing
            a = 0;
      else
            while(current != NULL)
            {
                  a += current->val * mover;
                  fprintf(stdout, "A ===== %llu\n", a);
                  mover *= 10;
                  current = current->next;
            }

      current = l2;
      mover = 1;
      if (current->val == 0 && current->next == NULL)
            b = 0;
      else
          while (current != NULL)
          {
              b += current->val * mover;
              mover *= 10;
              current = current->next;
          }

      unsigned long long sum = a + b;
      fprintf(stdout, "a = %llu\n", a);
      fprintf(stdout, "b = %llu\n", b);
      fprintf(stdout, "sum = %llu\n", sum);

      struct ListNode *res = NULL;
      if (sum == 0)
            insertEnd(&res, 0);
      else
            res = createList(sum);

      fprintf(stdout, "Result linked list: \n");
      printLinkedList(res);
      
      return EXIT_SUCCESS;
}

struct ListNode *createList(long long n)
{      
      struct ListNode *node = NULL;
      int c = 1;
      while (n > 0)
      {
            if (c)
            {
                  insertBeginning(&node, n%10);
                  c = 0;
                  n /= 10;
            }
            insertEnd(&node, n%10);
            n /= 10;
      }

      return node;

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
}


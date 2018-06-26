#include <stdio.h>

struct node {
   int key;
   char data;
   struct node *next;
};

void printList(const struct node *head)
//@ requires true;
//@ ensures true;
{
   struct node *ptr = head;
   printf("\n[ ");

   while(ptr != NULL)
   //@ requires true;
   //@ ensures true;
   {     
      printf("(%d,%d) ", ptr->key, ptr->data);
      ptr = ptr->next;
   }
   printf(" ]");
}

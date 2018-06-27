#include <stddef.h>

struct node {
   int key;
   char data;
   struct node *next;
};

// TODO: Generate a postcondition that describes the return value.

int length(struct node *head)
//@ requires true;
//@ ensures true;
{
   int length = 0;
   for (struct node *current = head; current != NULL; current = current->next)
   //@ requires true;
   //@ ensures true;
   {
      length++;
   }
   return length;
}




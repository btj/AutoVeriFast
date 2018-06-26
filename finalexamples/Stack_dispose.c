#include <stdlib.h>

struct node {
   int key;
   char data;
   struct node *next;
};

void stack_dispose(struct node *stack)
//@ requires true;
//@ ensures true;
{
   while (stack != 0)
   //@ requires true;
   //@ ensures true;
   {
      struct node *next = stack->next;
      free(stack);
      stack = next;
   }
}

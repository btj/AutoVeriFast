#include <stddef.h>

struct node {
   int key;
   char data;
   struct node *next;
};

struct node *reverse(struct node *head) 
//@ requires true;
//@ ensures true;
{
   struct node *prev = NULL;
   struct node *current = head;
   struct node *next;
	
   while (current != NULL) 
   //@ requires true;
   //@ ensures true;
   {
      next = current->next;
      current->next = prev;   
      prev = current;
      current = next;
   }

   return prev;
}

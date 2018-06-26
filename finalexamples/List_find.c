#include <stddef.h>

struct node {
   int key;
   char data;
   struct node *next;
};

struct node *find(int key, struct node *head)
//@ requires true;
//@ ensures true;
{
   struct node *current = head;
   if (head == NULL) {
      return NULL;
   }
   while (current->key != key)
   //@ requires true;
   //@ ensures true;
   {
      if (current->next == NULL) {
         break;
      } else {
         current = current->next;
      }
   }

   return current;
}

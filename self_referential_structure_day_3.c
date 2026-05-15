/*Self referential structure:
A self referential sturcture is a structure that contains a pointer of same structure type
syntax:
struct structname
{
datatype member;
datatype member;
struct structname *pointermember;  --> self referential structure
}*/
#include<stdio.h>
#include<string.h>
struct Node{
    int data;
    struct Node *next;
};
int main()
{
  //step 1-create node
  struct Node node1,node2,node3;
  //step 2-assign a data
  node1.data = 10;
  node1.next = NULL;
  
  node2.data = 20;
  node2.next = NULL;
  
  node3.data = 30;
  node3.next = NULL;
  
  //step - 4-link the node
  node1.next = &node2;
  node2.next = &node3;
  node3.next = NULL;

  // print the linked node
  printf("Linked List:");
  printf("%d -->",node1.data);
  printf("%d -->",node1.next->data);
  printf("%d -->",node1.next->next->data);
  printf("NULL\n");
return 0;
}
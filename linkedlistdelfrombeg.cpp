#include <iostream>
using namespace std;
//Creating Node Structure
struct Node
{
 int data;
 Node *link;
};
//creating head pointer and equating to NULL
Node *head=NULL;
//Function to delete node at the beginning
void deleteBeg()
{
//if list is empty.
if(head==NULL)
 cout<<"LIST IS EMPTY\n";
else
{
 Node *ptr=head;
 head=head->link;
 free(ptr);
}
}

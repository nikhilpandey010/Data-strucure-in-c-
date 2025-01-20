//Given the head of a singly linked list, return the middle node of the linked list.

//If there are two middle nodes, return the second middle node.

#include<iostream>
#include<vector>
using namespace std;
class node{
  public:
  int data;
  node *next;

  node(int value)
  {
      data=value;
      next=NULL;
  }


};

//adding node  in list
node* linked_node(int arr[],int n,int index)
  {
    if(index == n)
    {
      return NULL;
    }
     node *p=new node(arr[index]);
     p->data=arr[index];

     p->next= linked_node( arr, n,index+1);

     return p;

  }


node* middle_list(node* head)
{
    node* fast=head,*slow=head;

    while(fast->next != NULL && fast!= NULL)
    {
        fast=fast->next->next;
        slow=slow->next;

    }

    return slow;

}


int main()
{
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    head = linked_node(arr,size,0);

    node *middle=middle_list(head);

    cout<<middle->data;
}

// not running.....




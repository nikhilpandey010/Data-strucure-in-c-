// Reverse a linked list in which node is also reversed means first node become the last and last become the first..
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

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    node *head=NULL;
    head= linked_node(arr,size,0);
    node *temp=head;

    node *prev=NULL,*three;
    temp=head;

    while(temp)
    {
        three =temp->next;
        temp->next= prev;
        prev=temp;
        temp=three;
    }

    head = prev;
// display data ........
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}

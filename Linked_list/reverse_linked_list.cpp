// REVERSE LINKED LIST USING VECTOR
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

// reverse linked list by using vector......

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    node *head=NULL;
    head= linked_node(arr,size,0);
    node *temp=head;

    while(temp)
    {
       ans.push_back(temp->data);
       temp=temp->next;

    }

    temp=head;
    for(int i=ans.size()-1;i>=0;i--)
    {
        temp->data=ans[i];
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

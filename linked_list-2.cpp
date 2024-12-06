// adding node at the last and at the begin  using recursion......

#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};
// function of adding node at the end...
node* linked_end(int arr[],int n,int index)
  {
      if(index == n)
      {
          return NULL;
      }


         node *p=new node(arr[index]);
         p->data=arr[index];

         p->next= linked_end( arr, n,index+1);

         return p;

  }

// function of adding node at the start...

  node* linked_begin(int arr[],int n,int index,node *prev)
{

    if(index==n)
    {
        return prev;
    }
    node *p=new node(arr[index]);
    p->next=prev;
    prev=p;

    linked_begin(arr,n,index+1,prev);


}


int main()
{

    node *head,*temp;
    head=NULL;
   int n=4;
   int arr[n]={1,2,3,4};
   head =  linked_end(arr,n,0);
   temp=head;

// display data....
   while(temp)
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   }
   cout<<endl;

// adding node at the begin
   int n1= 4;
   int arr1[n1]={5,6,7,8};

   head = linked_begin(arr1,n1,0,NULL);
   temp =head;

// display data...
   while(temp)
   {
       cout<<temp->data<<" ";
       temp = temp->next;
   }
}



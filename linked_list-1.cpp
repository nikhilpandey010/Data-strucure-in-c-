// program of adding node at the last or at the begining in the linked-list

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

int main()
{
    int arr[8]= {1,2,3,4,5,6,7,8};
    node *head;
    head= NULL;

// insert  node at the begining of the list ...
    for(int i=0; i<4; i++)
    {
        if(head==NULL)
        {
            head = new node(arr[i]);


        }
        else
        {
            node *temp;
            temp =new node(arr[i]);
            temp->next=head;
            head=temp;
        }

    }
// display data from list ......
   node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

// add  node in the last....
     temp=head;
     if(head != NULL)
     {
       while(temp->next !=NULL)
         {
            temp=temp->next;
         }
     }
    // node *prev=temp;

    for(int i=4; i<8; i++)
    {
        if(head == NULL)
        {
            head = new node(arr[i]);
            temp=head;

        }
        else
        {
            node *p;
            p=new node(arr[i]);
            temp->next=p ;
            temp=p;

        }

    }
// display data from list......
     temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }




}



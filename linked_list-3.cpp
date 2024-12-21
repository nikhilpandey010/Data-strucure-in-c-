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

// function to add node at anywhere in the linked list.....
node* linked_any(node *head,int value,int postion)
{
    if(postion == 1)
    {
        if(head== NULL)
        {
            node *p = new node(value);
            return p;
        }
        else
        {
            node *p =new node(value);
            p->next=head;
            return p;
        }

    }
    node *temp=head;
    postion=postion-2;
    while(postion)
    {
       temp =temp->next;
       postion--;
    }
    node *p = new node(value);
    p->next=temp->next;
    temp->next=p;



}


int main()
{
    node *head=NULL;
    int value,n,choice;
//--> when we have to insert the node at anywhere in existing list..
    while(true)
    {
        cout<<"Enter 1 to exit  2 to add data ";
        cin>>choice;
        if(choice == 1)
        {
            node *temp=head;
            cout<<" Data is : ";
            while(temp)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            break;
        }

        if(choice == 2)
        {
            cout<<"enter data and postion in which you want to add data..  Enter -1 to display data \n";
            cin>>value>>n;
            head=  linked_any(head,value,n);
            // display node...
            node *temp=head;
            cout<<" Data is : ";
            while(temp)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;

        }



    }




}


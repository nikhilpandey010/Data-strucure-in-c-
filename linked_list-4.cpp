//delete node (not push on git hub )
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
//adding first element of array in last.....
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
node* del_first(node *head)
{

    node *temp=head;
    head=head->next;
    delete temp;
    cout<<" First node is deleted \n";
    return head;

}
node* del_last(node *head)
{
    if(head->next==NULL)
    {
        node *temp=head;
        delete temp;
        head=NULL;
        return NULL;
    }
    else if(head != NULL)
    {
        node *temp=head;
        node *prev;
        while(temp->next!=NULL)
        {
            prev= temp;
            temp= temp->next;
        }
        prev->next=NULL;
        delete temp;
        return head;


    }

}

int main()
{
    int s,choice;
    node *head=NULL;
    cout<<"enter the size of array \n";
    cin>>s;
    int arr[s];
    cout<<"enter the value \n";
    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
    }
    head=  linked_begin(arr,s,0,NULL);// adding node in linked list

    while(true)
    {
        if(head== NULL)
        {
            cout<<" No node to delete \n";
            break;
        }
        cout<<"Press 1-to delete first node  2- to delete last node from list and any other number to exit... \n";
        cin>>choice;

// delete first node from the list ......
        if(choice == 1)
        {
            head=del_first(head);
        }
// delete last node from the list....
       else if(choice == 2)
        {
            head = del_last(head);
            cout<<" last node deleted ";
        }
        else
        {
            break;
        }

// display data from list
        node *temp=head;
        cout<<"data is \n";
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;


    }



}

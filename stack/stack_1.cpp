// STACK IMPLEMENTATION
#include<iostream>
using namespace std;
#define n  5

class stacks
{
public:
    int *arr,top;
    stacks()
    {
        arr = new int[n];
        top= -1;
    }
    void push(int value)
    {
        if(top == n-1)
        {
            cout<<"overflow  ";
            return;
        }
        top++;
        arr[top]= value;
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<" no element to be deleted ";
        }
        top--;
        cout<<" element deleted ";
    }



};
int main()
{
    stacks st;
    int m;
    while(true)
    {
        cout<<"Enter [1] to push data  [2] to pop data and [3] to display or [4]  to exit ";
        cin>>m;

        if(m == 1)
        {
            int value;
            cout<<"enter a value to be push ";
            cin>>value;
            st.push(value);
        }
        else if(m == 2)
        {
            st.pop();
        }
        else if(m ==3)
        {
            while(st.top > -1)
            {
                cout<<st.arr[st.top]<<" ";
                st.top-=1;
            }
        }
        else
        {
            break;
        }

    }


    delete [] st.arr; //  free pointer


}


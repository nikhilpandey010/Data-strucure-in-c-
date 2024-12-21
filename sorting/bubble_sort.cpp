// bubble sort....
#include<iostream>
using namespace std;
int main(){
int arr[7]={2,4,1,8,10,-1,0};
int swap_no=0,n=7;
int prev_swap=0;

for(int i=0;i<n;i++)
{
    bool c= false;
    for(int j=0;j<(n-1-i);j++)
    {


        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swap_no++;
            c= true;
        }


    }
     if(c== false)
        break;
}

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"no of swaping is "<<swap_no;

}


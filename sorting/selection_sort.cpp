// selection sort
#include<iostream>
using namespace std;
void selection_sort(int arr[],int s)
{
    for(int i=0;i<s-1;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }

        }
    }





}
int main()
{
    int arr[]={-1,0,2,10,22,13,-2,0,-9};
    int s = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,s);
// after sorting .....
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
}


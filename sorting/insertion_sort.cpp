// insertion sort...
#include<iostream>
using namespace std;
void insertion_sort(int arr[],int s)
{
    for(int i=1;i<s;i++)
    {

        for(int j=i;j>0;j--)
        {
           if(arr[j]<arr[j-1])
           {
               swap(arr[j],arr[j-1]);

           }
        }

    }


}
int main()
{

    int arr[]={8,2,5,9,1};
    int s = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,s);
    cout<<"After sorting....\n";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
}

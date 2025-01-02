#include<iostream>
using namespace std;
void mergeing(int arr[],int start,int end,int mid)
  {
      int temp[end-start+1];
      int first=start,second=mid+1,index=0;
      while(first<=mid && second<=end)
      {
          if(arr[first]<=arr[second])
          {
              temp[index]=arr[first];
              index++ ;
              first++;
          }
          else
          {
              temp[index]=arr[second];
              index++;
              second++;
          }
      }
      //if first left
      while(first<=mid)
      {
          temp[index]=arr[first];
          first++;
          index++;
      }
      // if second left...
      while(second<=end)
      {
          temp[index]=arr[second];
          second++;
          index++;
      }

      // to insert the arranged value of temporary array into orignal array
      index=0;
      while(start<=end)
      {
          arr[start]=temp[index];
          start++;
          index++;
      }
  }

  void merge_sort(int arr[],int start,int end)
 {
     if(start==end)
        return;

     int mid=start +(end-start)/2;// to stop the overflow condition.
     merge_sort(arr,start,mid);
     merge_sort(arr,mid+1,end);
     mergeing(arr,start,end,mid);
 }
 int main()
{
    int s;
    cout<<"Enter the size of array \n";
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,0,s-1);

    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}



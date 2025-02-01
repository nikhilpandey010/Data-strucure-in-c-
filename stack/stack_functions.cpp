// STACK INBUILT FUNCTION
#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<int>st;

    while(true)
    {
      int n;
      cout<<"Enter [1] for PUSH /  [2] for POP / [3] for DISPLAY / [4] for EXIT "  ;
      cin>>n;
      if(n == 1)
      {
          int val;
          cout<<"Enter the value to be push ";
          cin>>val;
          st.push(val);
      }
      else if(n==2)
      {
          st.pop();
      }
      else if(n == 3)
      {
          while(!st.empty())
          {
              cout<<st.top()<<endl;
              st.pop();
          }
      }
      else if(n==4)
      {
          break;
      }
    }
    return 0;


}

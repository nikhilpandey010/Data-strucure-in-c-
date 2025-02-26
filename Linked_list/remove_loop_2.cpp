// Removing loop from linked list second method  using fast and slow pointer....

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
       Node* slow =head,*fast=head;
       while(fast->next != NULL && fast != NULL)
       {

           slow = slow->next ;
           fast= fast->next->next ;

           if( fast == slow )
           {
               break;
           }
       }

       if(fast->next == NULL || fast == NULL)
       {
           return ;
       }


           slow =  head;
            while(slow != fast)
           {
               slow=slow->next ;
               fast =fast->next ;
           }

           while(slow->next != fast)
           {
               slow=slow->next ;
           }
            slow->next = NULL ;




    }
};

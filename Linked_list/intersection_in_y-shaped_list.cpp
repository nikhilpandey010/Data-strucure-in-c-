// Given the head of two singly linked lists, return the point where these two linked lists intersect.

// Solution
class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    Node* intersectPoint(Node* head1, Node* head2) {
        Node* temp1=head1 ,*temp2 = head2 ;
        int count1=0 ,count2=0 ;
        while(temp1)
        {
            count1++;
            temp1=temp1->next ;
        }
        while(temp2)
        {
            count2++ ;
            temp2=temp2->next ;

        }
        temp1=head1 ,temp2 = head2 ;
        if(count1>count2)
        {
            count1=count1-count2 ;
            while(count1)
            {
                temp1=temp1->next ;
                count1--;

            }
        }
        else
        {
            count2= count2 - count1 ;
            while(count2)
            {
                temp2= temp2->next ;
                count2-- ;
            }
        }
        while(temp1 )
        {
            if(temp1 == temp2)
            {
                return temp1 ;
            }
            temp1= temp1 -> next ;
            temp2= temp2 -> next ;
        }




    }
};

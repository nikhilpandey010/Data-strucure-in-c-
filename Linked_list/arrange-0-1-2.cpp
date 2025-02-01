//Given a linked list where nodes can contain values 0s, 1s, and 2s only.
//The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to
//the head side, 2s at the end of the linked list,and 1s in the middle of 0s and 2s.

// soluction

  //Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};



class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
        Node* temp=head ;
        int zero=0,one=0,two=0;

        while(temp)
        {
            if(temp-> data == 0)
            zero+=1;
            else if(temp-> data == 1)
            one+=1;
            else
            two+=1;

            temp=temp->next;

        }
        temp=head;

        while(temp)
        {
            if(zero)
            {
                temp->data =0;
                zero--;
            }

            else if(one)
            {
                temp->data =1;
                one--;
            }
            else
            {
                temp->data = 2;
                two--;
            }
            temp=temp->next;
        }

        return head;


    }
};


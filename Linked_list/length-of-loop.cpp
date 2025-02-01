// Length of loop in linked list
//https://www.geeksforgeeks.org/problems/find-length-of-loop/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        unordered_map<Node*,int>mp;
        Node* temp=head;
        int count=0;
        while(temp)
        {
            if(mp[temp] )
            {
                return count-mp[temp] +1;
            }
            count+=1;
            mp[temp]=count;
            temp=temp->next;

        }
        return 0;
    }
};

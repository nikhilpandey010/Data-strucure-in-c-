//Remove loop from linked list .......
//https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        map<Node*,bool>mp;
        Node* temp= head;
        while(temp)
        {
            mp[temp]=1;
            if(mp[temp->next])
            {
                temp->next = NULL;
                return;
            }
            temp=temp->next;

        }
        return ;
    }
};

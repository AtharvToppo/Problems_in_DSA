/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        Node *curr=head;
        Node *prev=NULL;
        
        while(curr!=NULL)
        {
            if(prev==NULL)
            {
                prev=curr;
                curr=curr->next;
            }
            else
            {
                if(curr->data==prev->data)
                {
                    prev->next=curr->next;
                    delete curr;
                    curr=prev->next;
                }
                else
                {
                    curr=curr->next;
                    prev=prev->next;
                }
            }
        }
        return head;
    }
};
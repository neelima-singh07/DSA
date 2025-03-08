class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        if(!head)return nullptr;
        if(x==1){
            Node*temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        Node*temp=head;
        for(int i=1;i < x - 1 && temp->next != nullptr;i++){
            temp=temp->next;
        }
        if (!temp->next) return head;
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;

        return head;
        
        
        
        
    }
};

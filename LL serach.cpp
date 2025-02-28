bool searchKey(int n, Node* head, int key) {
        // Code here
        if(head==NULL)return false;
        Node*temp=head;
        while(temp->next!=NULL){
            if(temp->data==key){
                return  true;
                
            }
            temp=temp->next;
            
        }
        return false;
    }

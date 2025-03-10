Node* segregate(Node* head) {

        // Add code here
        if (!head || !head->next) return head;
        Node*dummy0=new Node(-1);
        Node*dummy1=new Node(-1);
        Node*dummy2=new Node(-1);
        Node*zero=dummy0;
        Node*one=dummy1;
        Node*two=dummy2;
        Node*temp=head;
        while(temp!=nullptr){
            if(temp->data==0){
                dummy0->next=temp;
                zero=zero->next;
            }
            else if(temp->data==1){
                dummy1->next=temp;
                one=one->next;
            }
            else{
                dummy2->next=temp;
                two=two->next;
                
            }
            temp=temp->next;
        }
        zero->next=dummy1->next?dummy1->next:dummy2->next;
        one->next=dummy2->next;
        two->next=nullptr;
        head= dummy0->next;
        return head;
        
        
        
    }
};

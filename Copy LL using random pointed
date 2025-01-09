Node* copyRandomList(Node* head) {
        //first normally copy the ll
        if(head==NULL)return NULL;
        unordered_map<Node*,Node*>m; 
        Node* newhead=new Node(head->val);
        m[head]=newhead;
        Node* oldtemp=head->next;
        Node* newtemp=newhead;
        while(oldtemp!=NULL){
            Node* copynode=new Node(oldtemp->val);
            m[oldtemp]=copynode;
            newtemp->next=copynode;
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;

        }

        //now copying the nodes of random pointers we need to have a map
        oldtemp=head;
        newtemp=newhead;
        while(oldtemp!=NULL){
            newtemp->random=m[oldtemp->random];
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;


        }
}        return newhead;

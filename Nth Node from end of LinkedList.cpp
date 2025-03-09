class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        
        Node *fast=head;
        Node *slow=head;
        for(int i=0;i<k;i++){
            if(fast==nullptr)return -1;
            fast=fast->next;
        }
        while(fast!=nullptr ){
            slow=slow->next;
            fast=fast->next;
        }
        
        return slow->data;
        
    }
};

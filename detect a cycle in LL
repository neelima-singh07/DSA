ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        bool iscycle=false;
  // first check if there is cycle, if yes the break from there so fast ptr remains at that position 
        while(fast!=NULL && fast->next!=NULL){
            
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                iscycle=true;
                break;
                

            }

        }
  // if there is no cycle return null, if yes then fast ptr will be at the posi where it is equal to slow and then again initialise the slow to head and then move both ptr by one place only 

        if(!iscycle){
            return NULL;

        }
        slow=head;
        while(slow !=fast){
            slow=slow->next;
            fast=fast->next;

        }
        return slow;
        
        
    }

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr||head->next==nullptr)return head;
        ListNode*odd=head;
        ListNode*even=head->next;
        ListNode*even_head=even;
        while(even!=nullptr && even->next!=nullptr ){
          //pehle odd ko move kro taaki error na aaya heap wala then usko next move kro 
            odd->next = even->next;
            odd = odd->next;
           //then even ko move kro 
            even->next = odd->next;
            
            even = even->next;
            
        }
        odd->next=even_head;
        return head;
        
    }
};

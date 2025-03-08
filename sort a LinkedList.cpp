class Solution {
public:
    ListNode*findmid(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }
    ListNode*merge(ListNode*head1,ListNode*head2){
        //make a dummy node of -1 and point a ptr temp on it
        ListNode*ans= new ListNode(-1);
        ListNode* temp=ans;
        ListNode*left=head1;
        ListNode*right=head2;
        while(left!=NULL && right!=NULL){
            if(left->val < right->val){
                temp->next=left;
                left=left->next;
                temp=temp->next;
            }
            else{
                temp->next=right;
                right=right->next;
                temp=temp->next;
            }

        }
        //if nodes r left 
        while(left!=NULL){
            temp->next=left;
            left=left->next;
            temp=temp->next;
        }
        while(right!=NULL){
            temp->next=right;
            right=right->next;
            temp=temp->next;
        }
        ans=ans->next;
        return ans;

    }
    ListNode* sortList(ListNode* head) {
        //sorting the list using merge sort 
        
        //base case 
        if(head==NULL || head->next==NULL){
            return head;
        }

        //find mid using fast and slow ptr
        ListNode*mid=findmid(head);

        //divide the linked list 
        ListNode*left=head;
        ListNode*right=mid->next;
        mid->next=NULL;
        left=sortList(left);
        right=sortList(right);

        //merge the linked list 
        
        return merge(left,right);


        
    }
};

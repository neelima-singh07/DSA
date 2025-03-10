class Solution {
public:
    ListNode*findkth(ListNode* head, int k){
        ListNode* temp=head;
        for(int i=0;i<k;i++){
            if(temp==nullptr)return nullptr;
            temp=temp->next;
        }
        return temp;

    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr)return head;  //first check if head is equal to null before writing head->next as it will throw error if not written 
        ListNode*tail=head;
        int len=1;  //loop will stop when head next is null means head is included so len=1 
        while(tail->next!=nullptr){
            len+=1;
            tail=tail->next;
        }
        if(k==0)return head;  //if k is zero return head no rotations write it 
        if(k%len==0)return head;  //if it is multiple of len then directlt return head
        k=k%len;  //modularise k 
        ListNode*newLast=findkth(head,len-k-1);  //new last node calculate 
        if(newLast==nullptr)return head; //if it is null return head 
        tail->next=head; //otherwise do this steps tails next ishead
        head=newLast->next;//newlast next is newhead 
        newLast->next=nullptr;  //new last will point to null
        return head;
        

    }
};

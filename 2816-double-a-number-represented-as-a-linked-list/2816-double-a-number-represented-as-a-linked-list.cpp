/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rev(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* front;
        while(curr!=NULL){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        
        ListNode* h1=rev(head);
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        int carry=0;
        int sum=0;
        while(h1!=NULL){
            sum=h1->val*2+carry;
            ListNode* t= new ListNode(sum%10);
            carry=sum/10;
            temp->next=t;
            temp=t;
            h1=h1->next;
        }
        if(carry){
            ListNode* t=new ListNode(carry);
            temp->next=t;
            temp=t;
        }

        temp=dummy->next;

        return rev(temp);
      

    }
};
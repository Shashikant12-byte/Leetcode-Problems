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
    ListNode* reverseEvenLengthGroups(ListNode* head) {

        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prevNode=dummy;
        ListNode* currNode=head;
        int group=1;
        ListNode* temp;
        while(currNode!=NULL){
            int count=0;
            temp=currNode;
            while(count<group && temp!=NULL){
                temp=temp->next;
                count++;
            }
            if(count%2==0){
                  ListNode* prev=NULL;
                  ListNode* curr=currNode;
                  ListNode* front;
                  ListNode* temp1=curr;
                  for(int i=1;i<=count;i++){
                        front=curr->next;
                        curr->next=prev;
                        prev=curr;
                        curr=front;
                  }
                  prevNode->next=prev;
                  temp1->next=curr;
                  currNode=temp;
                  group++;
                  prevNode=temp1;
            }
            else{
               for(int i=0;i<count;i++){
                prevNode = currNode;
                currNode = currNode->next;
                }
                group++;
            }
           
            
        } 
        return dummy->next;
        
    }
};
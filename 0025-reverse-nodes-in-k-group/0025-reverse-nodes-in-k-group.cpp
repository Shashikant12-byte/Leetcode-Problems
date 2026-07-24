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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* prevNode=dummy;

        int i=1;
        while(i<=size/k){
            ListNode* curr=prevNode->next;
            ListNode* temp1=curr;
            ListNode* prev=NULL;
            ListNode* front;
            for(int j=1;j<=k;j++){
                front=curr->next;
                curr->next=prev;
                prev=curr;
                curr=front;
            }
            prevNode->next=prev;
            temp1->next=curr;

            for(int i=1;i<=k;i++){
                prevNode=prevNode->next;
            }
            i++;
        }
        return dummy->next;
        
    }
};
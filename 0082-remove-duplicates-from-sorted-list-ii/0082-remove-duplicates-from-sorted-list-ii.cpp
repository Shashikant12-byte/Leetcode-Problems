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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>m;
        ListNode* temp=head;
        while(temp!=NULL){
            m[temp->val]++;
            temp=temp->next;
        }
        if(head==NULL){
            return NULL;
        }
        while(head!=NULL && m[head->val]>1){
            head=head->next;
        }
        if(head==NULL){
            return NULL;
        }

        temp=head;
        while(temp!=NULL){
           while(temp->next!=NULL && m[temp->next->val]>1){
            temp->next=temp->next->next;
        }
        temp=temp->next;
        }
       
      return head;
    }
};
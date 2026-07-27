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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* firstNode;
        ListNode* secondNode;
        for(int i=1;i<a;i++){
            temp1=temp1->next;
        }
        firstNode=temp1;
        temp1=list1;
        for(int i=1;i<=b+1;i++){
             temp1=temp1->next;
        }
        secondNode=temp1;

        ListNode* temp2=list2;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
         firstNode->next=list2;
         temp2->next=secondNode;
         return list1;


    }
};
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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        vector<int>v(size);
        temp=head;
        int i=0;
        while(temp!=NULL){
            v[i]=temp->val;
            temp=temp->next;
            i++;
        }

        vector<int>ans(size);

         i=size-1;
        stack<int>s;
        while(i>=0){
            while(!s.empty() && s.top()<=v[i]){
                s.pop();
               }

            if(s.empty()){
                    ans[i]=0;
                }
                else{
                    ans[i]=s.top();
                }

                s.push(v[i]);
                i--;
              
            }
            return ans;
  
    }
};
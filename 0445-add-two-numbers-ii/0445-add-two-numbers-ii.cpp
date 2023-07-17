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
        while(head!=NULL){
            ListNode* nex=head->next;
            head->next=prev;
            prev=head;
            head=nex;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=rev(l1);
        ListNode* b=rev(l2);
        int carry=0;
        ListNode* ans=new ListNode(9);
        ListNode* result=ans;
        while(a!=NULL||b!=NULL||carry>0){
            int sum=carry;
            if(a!=NULL){
                sum+=a->val; 
                a=a->next;
            }
            if(b!=NULL){
                sum+=b->val;
                b=b->next;
            }
            carry=sum/10;
            result->next=new ListNode(sum%10);
            result=result->next;
        }
        ans=rev(ans->next);
        return ans;
    }
};
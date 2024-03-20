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
        ListNode* temp2=list2;
        ListNode* list=list1;
        int j1=1;
        while(j1<a){
            temp1=temp1->next;
            j1++;
        }
        int j=1;
        while(j<=b){
            list=list->next;
            j++;
        }
        while(temp2->next){
            temp2=temp2->next;
        }
        
        temp1->next=list2;
        temp2->next=list->next;
        return list1;
    }
};
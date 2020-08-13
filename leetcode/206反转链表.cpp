#include <iostream>

using namespace std;

struct ListNode {
     int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };


class Solution {
public:
    
    ListNode* reverseList(ListNode* head) {
        ListNode* cur=head;
        ListNode* pre=NULL;
        while(cur!=NULL)
        {
            ListNode* temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        return pre;
    }
};
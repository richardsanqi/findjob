//给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
//
//如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
//
//您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
//
//示例：
//输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
//输出：7 -> 0 -> 8
//原因：342 + 465 = 807

#include <iostream>

using namespace std;

  struct ListNode {
     int val;
      ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  };
 

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* p = l1;
		ListNode* q = l2;
		int len1 = 1;
		int len2 = 1;
		while (p->next != NULL)
		{
			len1++;
			p = p->next;
		}
		while (q->next != NULL)
		{
			len2++;
			q = q->next;
		}
		if (len1 > len2)
		{
			for (int i = 0; i < len1 - len2; ++i)
			{
				q->next = new ListNode(0);
				q = q->next;
			}
		}
		else
		{
			for (int i = 0; i < len2 - len1; ++i)
			{
				p->next = new ListNode(0);
				p = p->next;
			}
		}
		p = l1;
		q = l2;
		bool count = false;
		int i = 0;
		ListNode* l3 = new ListNode(0);
		ListNode* w = l3;
		while (p != NULL && q != NULL)
		{
			i = count + p->val + q->val;
			w->next = new ListNode(i % 10);
			count = i >= 10 ? true : false;
			w = w->next;
			p = p->next;
			q = q->next;
		}
		if (count)
		{
			w->next = new ListNode(1);
			w = w->next;
		}
		return l3->next;
	}
};

class Solution2 {
public:
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		ListNode *head = new ListNode(0);
		ListNode *cur = head;

		int extra = 0;
		while (l1 || l2 || extra)
		{
			int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
			extra = sum / 10;
			l1 = l1 ? l1->next : l1;
			l2 = l2 ? l2->next : l2;
			cur->next = new ListNode(sum % 10);
			cur = cur->next;
			cout << sum << endl;
		}
		return head->next;
	}
};

class AddTwoNum {
public:
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) 
	{
		ListNode* head = new ListNode(0);
		ListNode* cur = head;
		//表示进位
		int extra = 0;
		while (l1 || l2 || extra)
		{
			int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
			extra = sum / 10;
			l1 = l1 ? l1->next : NULL;
			l2 = l2 ? l2->next : NULL;
			cur->next = new ListNode(sum % 10);
			cur = cur->next;
			cout << sum << endl;
		}
		return head->next;
	}
};

int main()
{
	ListNode *head = new ListNode(0);
	ListNode *cur = head;
	cout << head << endl;
	cout << cur << endl;
	system("pause");
	return 0;
}
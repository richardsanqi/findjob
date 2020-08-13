//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>

using namespace std;

class BinaryNode
{
	public:
		char data;
		BinaryNode* lchild;
		BinaryNode* rchild;
};

void CreateBitTree(BinaryNode **T)
{
	char c;
	//scanf("%c", &c);
	cin >> c;
	if (',' == c)
	{
		//cout << "----" << endl;
		*T = NULL;
	}
	else
	{
		//*T = (BinaryNode*)malloc(sizeof(BinaryNode));
		*T = new BinaryNode;
		(*T)->data = c;
		CreateBitTree(&(*T)->lchild);
		CreateBitTree(&(*T)->rchild);
	}
}

void Recursion(BinaryNode* root)
{
	if (root == NULL)
	{
		return;
	}
	//cout << root->data;
	Recursion(root->lchild);
	cout << root->data;
	Recursion(root->rchild);
}

int main()
{
	BinaryNode* T = NULL;
	CreateBitTree(&T);
	Recursion(T);
	//system("pause");
	return 0;
}
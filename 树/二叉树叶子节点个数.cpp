#include <iostream>

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
	cin >> c;
	if (',' == c)
	{
		*T = NULL;
	}
	else
	{
		*T = new BinaryNode;
		(*T)->data = c;
		CreateBitTree(&(*T)->lchild);
		CreateBitTree(&(*T)->rchild);
	}
}

int Count(BinaryNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->lchild==NULL&&root->rchild==NULL)
    {
        return 1;
    }
    else
    {
        return Count(root->lchild)+Count(root->rchild);
    }
    
}

int main()
{
	BinaryNode* T = NULL;
	CreateBitTree(&T);
	int count=Count(T);
    cout<<count;
	return 0;
}
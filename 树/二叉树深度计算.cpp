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

int Depth(BinaryNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        int m=Depth(root->lchild);
        int n=Depth(root->rchild);
        return (m>n)? m+1:n+1;
    }
    }

int main()
{
	BinaryNode* T = NULL;
	CreateBitTree(&T);
	int depth=Depth(T);
    cout<<depth;
	return 0;
}
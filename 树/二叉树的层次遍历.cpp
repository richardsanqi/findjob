#include <iostream>
#include <queue>

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

//层次遍历
void Recursion(BinaryNode* root)
{
	BinaryNode* cur;
    queue<BinaryNode*> q;
    q.push(root);
    while(!q.empty())
    {
        cur=q.front();
        q.pop();
        cout<<cur->data;
        if(cur->lchild!=NULL)
        {
            q.push(cur->lchild);
        }
        if(cur->rchild!=NULL)
        {
            q.push(cur->rchild);
        }
    }
}

int main()
{
	BinaryNode* T = NULL;
	CreateBitTree(&T);
	Recursion(T);
	//system("pause");
	return 0;
}
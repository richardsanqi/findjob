#include <iostream>
#include <stack>

using namespace std;

class BinaryNode
{
    public:
        char m_data;
        BinaryNode* lchild;
        BinaryNode* rchild;
};

void CreateBitTree(BinaryNode **T)
{
    char c;
    cin>>c;
    if(','==c)
    {
        *T=NULL;
    }
    else
    {
        *T=new BinaryNode;
        (*T)->m_data=c;
        CreateBitTree(&(*T)->lchild);
        CreateBitTree(&(*T)->rchild);
    }
}

//中序遍历
void mRecursion(BinaryNode* root)
{
    stack<BinaryNode*> s;
    BinaryNode* p=root;
    while(p||!s.empty())
    {
        if(p)
        {
            s.push(p);
            p=p->lchild;
        }
        else
        {
            {
                BinaryNode* q=s.top();
                s.pop();
                cout<<q->m_data;
                p=q->rchild;
            }
        }
    }
}
//先序遍历
void pRecursion(BinaryNode* root)
{
    stack<BinaryNode*> s;
    //BinaryNode* p=root;
    s.push(root);
    while(!s.empty())
    {
        BinaryNode* node=s.top();
        s.pop();
        if(node!=NULL)
        {
            cout<<node->m_data;
        }
        else
        {
            continue;
        }
        //调整两者的顺序，先序和后序遍历
        s.push(node->rchild);
        s.push(node->lchild);
    }
}

int main()
{
    BinaryNode* T = NULL;
	CreateBitTree(&T);
	mRecursion(T);
    pRecursion(T);
    return 0;
}
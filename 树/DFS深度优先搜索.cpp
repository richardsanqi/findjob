//有n件物品，每件物品的重量为w[i],价值为c[i],现在需要选出若干件物品
// 放入一个容量为V的背包中，使得在选入背包的物品重量和不超过容量V的前提下，
// 让背包中物品的价值之和最大，求最大价值（1<=n<=20)
#include <iostream>

using namespace std;

const int maxn=30;
int n,V,maxValue=0;//物品件数n，背包容量V，最大价值maxValue
int w[maxn],c[maxn];//w[i]为每件物品的重量，c[i]为每件物品的价值
//index为当前处理的物品编号
//sumW和sumC分别为当前总重量和当前总价值

void DFS(int index,int sumW,int sumC)
{
    if(index==n)
    {
        return;
    }
    DFS(index+1,sumW,sumC);
    if(sumW+w[index]<=V)
    {
        if(sumC+c[index]>maxValue)
        {
            maxValue=sumC+c[index];
        }
        DFS(index+1,sumW+w[index],sumC+c[index]);
    }
    //     //已经完成对n键物品的选择（死胡同）
    //     if(sumW <= V && sumC>maxValue)
    //     {
    //         maxValue=sumC;//不超过背包容量时更新最大价值maxVlue
    //     }
    //     return;
    // }
    // //岔道口
    // DFS(index+1,sumW,sumC);//不选第index件物品
    // DFS(index+1,sumW+w[index],sumC+c[index]);//选第index件物品
}

int main()
{
    int n;
    int v;
    cin>>n;
    cin>>v;
    for(int i=0;i<n;++i)
    {
        cin>>w[i];
    }
    for(int i=0;i<n;++i)
    {
        cin>>c[i];
    }
    DFS(0,0,0);
    cout<<maxValue<<endl;
    return 0;
}
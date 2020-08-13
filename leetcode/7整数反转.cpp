// 给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。

// 示例 1:
// 输入: 123
// 输出: 321
// 示例 2:
// 输入: -123
// 输出: -321
// 示例 3:
// 输入: 120
// 输出: 21


#include <iostream>

using namespace std;

#define INT_MAX 2147483647
#define INT_MIN -2147483648

int reverseNum(int x)
{
    int ans=0;
    while(x!=0)
    {
        int pop=x%10;
        x/=10;
        //-2147483648——2147483647
        if (ans > INT_MAX/10 || (ans == INT_MAX / 10 && pop > 7)) 
        {
            return 0;
        }
        if (ans < INT_MIN/10 || (ans == INT_MIN / 10 && pop < -8)) 
        {
            return 0;
        }
        ans=ans*10+pop;
    }
    return ans;
}

int main()
{
    int input;
    cin>>input;
    int ans=reverseNum(input);
    cout<<ans<<endl;
    return 0;
}

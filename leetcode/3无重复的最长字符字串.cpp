// 给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
// 示例 1:
// 输入: "abcabcbb"
// 输出: 3 
// 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。

#include <unordered_set>
#include <iostream>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // 哈希集合，记录每个字符是否出现过
        unordered_set<char> occ;
        int n=s.size();
        // 右指针，初始值为0，相当于我们在字符串的左边界的左侧，还没有开始移动
        int rk=0;
        //最长字符串字串长度
        int ans=0;
        for(int i=0;i<n;++i)
        {
            // 左指针向右移动一格，移除一个字符
           if(i!=0)
           {
               occ.erase(s[i-1]);
           }
           // 不断地移动右指针
           while(rk<n && !occ.count(s[rk]))
           {
               occ.insert(s[rk]);
               ++rk;
           }
           // 第 i 到 rk 个字符是一个极长的无重复字符子串
          ans=max(ans,rk-i);
        }
        return ans;
    }
};

int main()
{
    string s;
    cin>>s;
    Solution S;
    int ans=S.lengthOfLongestSubstring(s);
    cout<<ans<<endl;
    return 0;
}
/*
给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。
示例 1：
输入: "babad"
输出: "bab"
注意: "aba" 也是一个有效答案。
示例 2：
输入: "cbbd"
输出: "bb"
*/
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        string result="";
	//存放输出结果
        string temp="";
	//存放分割的子串
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                temp = temp+s[j];
                string tem=temp;
		//tem存放分割子串反转结果
                reverse(tem.begin(),tem.end());
		//反转
                if(temp == tem)
                    result = result.length() > temp.length() ? res : temp;
            }
            temp="";
        }
        return res;
    }
};
//缺点：时间复杂度为O(n^3)

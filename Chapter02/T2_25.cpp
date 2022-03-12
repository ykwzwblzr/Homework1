/*这是一个多行注释
*
*FileName: T2_25.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: A multiple decision
*/
#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    cin>>a>>b;
    if(a/b!=0 & a%b==0)
        cout<<a<<"是"<<b<<"的倍数";
    else
       cout<<a<<"不是"<<b<<"的倍数";
    return 0;
}

/*这是一个多行注释
*
*FileName: T2_28.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Blank output digit
*/
#include <iostream>
using namespace std;
int main()
{
    int a=0;
    cin>>a;
    int b=0,c=0,d=0,e=0,f=0;
    b=a/10000;
    c=(a-10000*b)/1000;
    d=(a-10000*b-1000*c)/100;
    e=(a-10000*b-1000*c-100*d)/10;
    f=a%10;
    cout<<b<<"   "<<c<<"   "<<d<<"   "<<e<<"   "<<f<<endl;

    return 0;
}

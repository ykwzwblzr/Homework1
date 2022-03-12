/*这是一个多行注释
*
*FileName: main.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculation of oil cost
*/
#include <iostream>
using namespace std;
int main()
{  double a=0,b=0,c=0,d=0,e=0,f=0;
cout<<"输入每天开的总英里数：";
cin >>a;
cout<<"每加仑汽油的价格：";
cin>>b;
cout<<"每加仑可以开的英里数: ";
cin>>c;
cout<<"每天的停车费： ";
cin>>d;
cout<<"每天的通行费： ";
cin>>e;
f=(a/c)*b+d+e;
cout<<"每天的汽车消费： "<<f<<endl;
return 0;
}

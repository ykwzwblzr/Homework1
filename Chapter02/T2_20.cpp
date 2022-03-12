/*这是一个多行注释
*
*FileName: T2_20.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Find the diameter, area and circumference of a circle
*/
#include <iostream>
using namespace std;
int main()
{  int r=0;
   int D=0;
   double C=0,S=0;
   cin>>r;
   D=2*r;
   S=3.14159*r*r;
   C=3.14159*r*2;
   cout<<"D="<<D<<"  "<<"C="<<C<<"  "<<"S="<<S<<endl;
   return 0;
}

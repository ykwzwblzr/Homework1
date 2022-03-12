/*这是一个多行注释
*
*FileName: T2_19.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: C++ procedures about tables
*/
#include <iostream>
using namespace std;
int main()
{  int integer=0;
    int square=0;
    int cube=0;
    for(int integer=0;integer<=10;integer++)
  {cout<<"integer"<<"\t"<<"square"<<"\t"<<"cube"<<endl;
       square=integer*integer;
       cube=integer*integer*integer;
       cout<<integer<<"\t";
       cout<<square<<"\t";
       cout<<cube<<endl;
  }



    return 0;
}


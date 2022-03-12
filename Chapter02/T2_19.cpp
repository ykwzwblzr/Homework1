/*这是一个多行注释
*
*FileName: T2_19.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: A relational operation between two numbers
*/
#include <iostream>
using namespace std;
int main()
{   int a=0,b=0,c=0;
    int Sum=0,Average=0,Product=0,Smallest=0,Largest=0;
    cout<<"Input three different integers: ";
    cin>>a>>b>>c;
    Sum=a+b+c;
    Product=a*b*c;
    Average=(a+b+c)/3;
    if(a>=b)
    {
        Largest=a;
        Smallest=b;
    }
    else{ Largest=b;
        Smallest=a;

    }
    if(b>=c)
    {
        Smallest=c;
    }
    else
    {  if(a>=c)
     {
        Largest=a;
    }
    else
    {
        Largest=c;
    }
    }
    cout<<"Sum is  "<<Sum<<endl;
    cout<<"Average is  "<<Average<<endl;
    cout<<"Product is  "<<Product<<endl;
    cout<<"Smallest is  "<<Smallest<<endl;
    cout<<"Largest is  "<<Largest<<endl;
    return 0;

}

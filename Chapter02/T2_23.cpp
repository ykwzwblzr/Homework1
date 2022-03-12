/*这是一个多行注释
*
*FileName: T2_23.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: The comparison of the size of five numbers
*/
#include <iostream>
using namespace std;
int main()
{   int a[5],b;
    for(b=0;b<5;b++)
        cin>>a[b];
    for(b=1;b<5;b++)
        if(a[0]>a[b])
            a[0]=a[b];
            cout<<"最小数是："<<a[0]<<endl;

    for(b=1;b<5;b++)
        if(a[0]<a[b])
            a[0]=a[b];
            cout<<"最大数是："<<a[0]<<endl;

    return 0;
}

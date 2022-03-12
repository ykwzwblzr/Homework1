/*这是一个多行注释
*
*FileName: T2_30.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculate BMI
*/
#include <iostream>
using namespace std;
int main()
{
    double k=0;
    double m=0;
    double BMI=0;
    cin>>k>>m;
    BMI=k/(m*m);
    cout<<"你的BMI指数为 "<<BMI<<endl;
    cout<<"Underweight: less than 18.5"<<endl;
    cout<<"Normal:      between 18.5 and 24.9"<<endl;
    cout<<"Overweight:  between 25 and 29.9"<<endl;
    cout<<"Obese:       30 or greater"<<endl;
    return 0;

}

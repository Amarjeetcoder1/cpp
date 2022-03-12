#include<iostream>
using namespace std;
int main()
{
    float Basic_salary,Percent_Allow,Percent_Deduct,Net_salary;
    cout<<"Basic Salary:";
    cin>>Basic_salary;
    cout<<"Percent Allow:";
    cin>>Percent_Allow;
    cout<<"Percent Deduct:";
    cin>>Percent_Deduct;
    Net_salary=Basic_salary+Basic_salary*Percent_Allow/100-Basic_salary*Percent_Deduct/100;
    cout<<"Net Salary is:"<<Net_salary<<endl;
    return 0;
}
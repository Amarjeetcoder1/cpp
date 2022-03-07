#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,x,y;

    cout<<"Enter the values of varibles ";
    cin>>a>>b>>c>>d>>e;

    x = a+b*c-d/e;
    y = (a+b)*(c-d)/e;
    cout<<"The value of X "<<x<<endl;
    cout<<"The value of Y "<<y<<endl;



    return 0;
}
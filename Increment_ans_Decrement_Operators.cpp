#include<iostream>
using namespace std;
int main()
{
    int a=15,b;
    b=a++;
    cout<<b<<" "<<a<<endl;
     int c=15,d;
     d=++c;
     cout<<d<<" "<<c<<endl;
     int x=10,y;
     y=2*++x+2*x++;
     cout<<y<<" "<<x<<endl;

    return 0;
}
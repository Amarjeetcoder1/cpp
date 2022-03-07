#include<iostream>
using namespace std;
int main()
{
    int u,v,acc;
    float speed;
    cout<<"Enter the 3 no ";
    cin>>u>>v>>acc;
    speed=(v*v-u*u)/(2*acc);
    cout<<"Speed is: "<<acc<<endl;

    return 0;
}
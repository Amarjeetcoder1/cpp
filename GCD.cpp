#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter m,n";
    cin>>m>>n;

    while(m!=n)
    {
        if(m>n)
        m=m-n;
        else if(m<n)
        n=n-m;
    }
    cout<<m<<endl;

    


    
    return 0;
}
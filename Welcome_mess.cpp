#include<iostream>
using namespace std;
int main()
{
    string Name,Class;
    cout<<"May I know your Name:";
    getline(cin,Name);
    cin>>Class;
    cout<<"Welcome Mr/Mrs: "<<Name<<endl;
    cout<<"Welcome to class: "<<Class<<endl;
    return 0;
}
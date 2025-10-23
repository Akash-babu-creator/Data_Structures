#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int &r=a;
    cout<<a<<endl;
    r++;
    cout<<r<<endl;
    cout<<a<<endl;
    int b=30;
    r=b;
    cout<<r<<endl;
    cout<<a<<endl;

}
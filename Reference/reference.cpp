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

}
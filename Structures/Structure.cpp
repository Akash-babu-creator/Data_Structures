#include<iostream>
#include<stdio.h>
using namespace std;
struct rec
{
    int l;
    int b;
    char x;

}r1;
struct rec r2;
int main()
{
    struct rec r3={10,5};
    r1.l=3;
    r1.b=4;
    printf("%lu\n",sizeof(r1));
    cout<<r1.l<<endl;
    cout<<r1.b<<endl;


}
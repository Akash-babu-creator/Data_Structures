#include<iostream>
#include<stdio.h>
using namespace std;
struct rec
{
    int length;
    int bredth;
};
void initialise(struct rec *p,int len,int bred)
{
    p->length=len;
    p->bredth=bred;
}
int area(struct rec r1)
{
    return r1.length*r1.bredth;
}
void changelength(struct rec *p,int len)
{
    p->length=len;
}
int main()
{
    struct rec r;
    initialise(&r,15,20);
    cout<<"area = "<<area(r)<<endl;
    changelength(&r,50);
    cout<<"changed length ="<<r.length<<endl;

}
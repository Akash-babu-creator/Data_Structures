#include<iostream>
#include<stdio.h>
using namespace std;
struct rec
{
    int l;
    int b;
    
};
int main()
{
    // struct rec r={10,15};  //in c program struct is mendatory
    rec r={10,15};    //for c++ compiler no need to write struct (struct is not mendatory)
    cout<<r.l<<endl;
    cout<<r.b<<endl;
    // creating a pointer as a structure
    rec *p =&r;
    cout<<p->l<<endl<<p->b<<endl;


    struct rec *c;         //for c

    // rec *c;              //will not work in c program

    // c=(struct rec*)malloc(sizeof(struct rec));          // for c

    c=new rec;               //will not work in c program and will show error
    c->l=5;
    c->b=7;
    cout<<c->l<<endl<<c->b<<endl;



} 
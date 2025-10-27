#include<iostream>
#include<stdio.h>
using namespace std;

struct rec
{
    int length;
    int breadth;

};
// __________CALL BY VALUE_____
/*
int area(struct rec r1)
{
    r1.length=20;
    cout<<"inside the function "<<endl<<"length"<<" "<<r1.length<<endl<<"breadth"<<" "<<r1.breadth<<endl;
    return r1.length*r1.breadth;
}
int main()
{
    struct rec r={5,6};
    cout<<"before function call"<<endl<<"length"<<" "<<r.length<<endl<<"breadth"<<" "<<r.breadth<<endl;
    cout<<"Area = "<<area(r)<<endl;
    cout<<"after fucntion call"<<endl<<"length"<<" "<<r.length<<endl<<"breadth"<<" "<<r.breadth<<endl;
}
*/
//  ____________________CALL BY ADDRESS_______________
/*
int area(struct rec *r1)
{
    r1->length=20;
    cout<<"inside the function "<<endl<<"length"<<" "<<r1->length<<endl<<"breadth"<<" "<<r1->breadth<<endl;
    return r1->length*r1->breadth;
}
int main()
{
    struct rec r={5,6};
    cout<<"before function call"<<endl<<"length"<<" "<<r.length<<endl<<"breadth"<<" "<<r.breadth<<endl;
    cout<<"Area = "<<area(&r)<<endl;
    cout<<"after fucntion call"<<endl<<"length"<<" "<<r.length<<endl<<"breadth"<<" "<<r.breadth<<endl;
}
*/
// ___________returning pointer of a structure

struct rec *fun()   //it will create an object of type rec on Heap
{
    struct rec *p;
    // p=(struct rec *)malloc(sizeof(struct rec));
    p=new rec;
    p->length=7;
    p->breadth=8;
    return p;
    
}
int main()
{
    struct rec *ptr=fun();
    cout<<ptr->length<<endl<<ptr->breadth;
}
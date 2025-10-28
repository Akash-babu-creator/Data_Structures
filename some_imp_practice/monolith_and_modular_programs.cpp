#include<iostream>
#include<stdio.h>
using namespace std;

// ______________MONOLITH PROGRAM_______________
/*int main()
{
    int len=0,bred=0;
    printf("enter the lenght and breadth ");
    cin>>len>>bred;
    int area = len*bred;
    int peri = 2*(len+bred);
    cout<<"area ="<<area<<endl<<"perimeter ="<<peri<<endl;

    return 0;
}*/

// ___________MODULAR PROGRAMING OR PROGRAMIN USIN FUNCTION_____________
/*
int area (int length ,int breadth)
{
    return length*breadth;
}
int perimeter(int length,int breadth)
{
    int p;
    p=2*(length+breadth);
    return p;
}
int main()
{
    int len=0,bred=0;
    printf("enter the lenght and breadth ");
    cin>>len>>bred;
    int ar = area(len,bred);
    int peri = perimeter(len,bred);
    cout<<"area ="<<ar<<endl<<"perimeter ="<<peri<<endl;
}
*/

// __________________STRUCTURE AND FUNCTIONS__________
struct rec
{
    int length;
    int breadth;
};
int area (struct rec r)
{
    return r.length*r.breadth;
}
int perimeter( rec r)    //c++
{
    int p;
    p=2*(r.length+r.breadth);
    return p;
}
void initalize(struct rec *p,int length,int breadth)
{
    p->length=length;
    p->breadth=breadth;
    
}
int main()
{
    struct rec r={0,0};
    int l,b;
    printf("enter the lenght and breadth ");
    cin>>l>>b;
    initalize(&r,l,b);
    int ar = area(r);
    int peri = perimeter(r);
    cout<<"area ="<<ar<<endl<<"perimeter ="<<peri<<endl;
}
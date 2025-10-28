#include<iostream>
#include<stdio.h>
using namespace std;
/*
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
*/
//____________________CONVERTING THE ABOVE PROGRAM IN OBJECT ORIENTED PROGRAM________________


// ____________using struct__________
/*
struct rec
{
    int length;
    int breadth;

int area ()
{
    return length*breadth;
}
int perimeter()    //c++
{
    int p;
    p=2*(length+breadth);
    return p;
}
void initalize(int l,int b)
{
    length=l;
    breadth=b;
    
}
};
int main()
{
    struct rec r={0,0};
    int l,b;
    printf("enter the lenght and breadth ");
    cin>>l>>b;
    r.initalize(l,b);
    int ar = r.area();
    int peri = r.perimeter();
    cout<<"area ="<<ar<<endl<<"perimeter ="<<peri<<endl;
    return 0;
}*/

// __________________using class_______

/*the differe btw using class and struct is ...when we use struct every memeber is public
  but when we use class every memeber is private by defaut we have to specify the public
  and private member*/
class rec
{
    public:
    int length;
    int breadth;

int area ()
{
    return length*breadth;
}
int perimeter()    //c++
{
    int p;
    p=2*(length+breadth);
    return p;
}
void initalize(int l,int b)
{
    length=l;
    breadth=b;
    
}
};
int main()
{
    // struct rec r={0,0};
    rec r;
    int l,b;
    printf("enter the lenght and breadth ");
    cin>>l>>b;
    r.initalize(l,b);
    int ar = r.area();
    int peri = r.perimeter();
    cout<<"area ="<<ar<<endl<<"perimeter ="<<peri<<endl;
    return 0;
}
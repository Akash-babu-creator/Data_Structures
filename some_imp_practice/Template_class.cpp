#include<iostream>
using namespace std;
template <class T>
class arithamatic
{
    T a;
    T b;
    public:
    arithamatic (T a, T b);
    T add();
    T sub();
};
template<class T>
arithamatic<T>:: arithamatic(T a, T b)
{
    this->a=a;
    this->b=b;
}
template<class T>
T arithamatic<T>:: add()
{
    T c;
    c=a+b;
    return c;
}
template<class T>
T arithamatic<T>:: sub()
{
    T c;
    c=a-b;
    return c;
}
int main()
{
    arithamatic<int> ar(10,5);
    cout<<ar.add()<<endl;
    arithamatic<float> ar1(3.4,5.6);
    cout<<ar1.sub()<<endl;
    return 0;
}
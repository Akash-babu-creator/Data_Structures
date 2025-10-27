#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
// void fun(int x[ ],int n)
// ___OR_______
/*void fun(int *x,int n)
{
    x[0]=55;
    // for(int c:*x)   //cant use foreach loop on a pointer
    for (int i = 0; i < n; i++)
    {
        
        cout<<x[i]<<endl;
        
    }


}
int main()
{
    int a[]= {3,5,2,8,9};
    int n=5;
    fun(a,n);
    for(int x:a)
    cout<<x<<endl;
    cout<<"changes made in fun are reflected in actual array";
    
    
    return 0;

}
    */

    // ________returning array____
int * fun(int size)
{
    int *p;
    // p=(int *)malloc(sizeof(int));
    // ____OR_________
    p=new int [size];
    for (int i = 0; i < size; i++)
    {
        p[i]=i+1;
    }
    return p;
    

}
int main()
{
    int *a,n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    a=fun(n);
    // n=sizeof(a);    ____here sizeof will not give the size of array but instead it will give the size of int as 'a' is a integer pointer
    // cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    

    return 0;
}

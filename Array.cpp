#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    // int a[5];
    // a[0]=5;
    // a[1]=3;
    // a[2]=4;
    // int a[5]={2,5,8,7,0};
    int a[10]={2,7,8,0,6,1,12};
    cout<<sizeof(int)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<a[2]<<endl;
    cout<<a[9]<<endl;
    printf("%d\n",a[1]);
    int i;
    for ( i = 0; i < 10; i++)
    {
        cout<<a[i]<<endl;
    }
    for(int x:a)            //foreach loop (concept of c++)
    {
        cout<<x<<endl;
    }
    

    return 0;

}
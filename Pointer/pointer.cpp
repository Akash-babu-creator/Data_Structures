#include <iostream>
#include <stdio.h>
#include <stdlib.h>
struct rec
{
    int l;
    int b;
};

using namespace std;
int main()
{
    // int a=10;
    int *p;
    // p=&a;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // int c[5]={3,6,6,4,9};
    // int *d;
    // d=c;
    // or
    // d=&c[0];
    // for (int i = 0; i <5; i++)
    // {
    //     cout<<d[i]<<endl;
    // }




    // Creating an array in HEAP
    //  p=(int*)malloc(5*sizeof(int));    //it will create a array of size 5 in HEAP in C programming language
    //  -----OR-------
    // p = new int(5); // IN c++
    // cout << "enter the elements of array" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> p[i];
    // }
    // cout << "array" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << endl;
    // }
    // // free(p);
    // delete[] p;
    
    
    

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rec *p5;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;


    //size of the pointer is independent of its data type.
}
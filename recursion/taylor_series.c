#include<stdio.h>
/*
double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
    {
        return 1;
    }
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
    */
    //        another mehtod(aproach)
double e(int x,int n)
{
    static double s=1;
    if (n==0)
    {
        return s;
    }
    else
    {
        s=1+(x*s)/n;
        return e(x,n-1);
    }
}
void main()
{
    printf("%lf",e(5,15));
}
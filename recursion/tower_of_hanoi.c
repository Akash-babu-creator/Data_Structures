#include<stdio.h>
void TOH(int n,int a,int b,int c)
{
    int i=0;
    if(n>0)
    {
        TOH(n-1,a,c,b);
        printf("move from %d to %d\n",a,c);
        printf("no. of steps %d",i);
        TOH(n-1,b,a,c);
    }
}
void main()
{
    TOH(16,1,2,3);
}
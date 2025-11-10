#include<stdio.h>
/*                               it'll occupy space in stack
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return sum(n-1)+n;
    }
}*/

//  using formula
// /*
int sum(int n)
{
    return (n*(n+1))/2;
}
// */
// using loop
/*
int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n;
        n--;
    }
    return sum;
}
*/
void main()
{
    printf("%d",sum(5));
}
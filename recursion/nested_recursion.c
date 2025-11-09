#include<stdio.h>
int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return fun(fun(n+11));
    }
}
void main()
{
    printf("%d\n",fun(95));
    printf("%d\n",fun(99));
    printf("%d\n",fun(100));
    printf("%d\n",fun(80));
    printf("%d\n",fun(101));
    printf("%d\n",fun(103));
}

//           for every which is less than 100 this funcion will retrurn value 91
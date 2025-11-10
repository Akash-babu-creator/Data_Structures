#include <stdio.h>
/*
int pw(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pw(m, n - 1) * m;
    }
}
*/
    /* we can write 2^8 = (2^2)^4     (even power)
                        = (2*2)^4     (odd power)
                    2^9 = 2*(2^2)^4 

    */      
int pw(int m, int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return pw(m*m,n/2);
    }
    else
    {
        return m*pw(m*m,(n-1)/2);
    }
}
void main()
{
    printf("%d",pw(2,9));
}
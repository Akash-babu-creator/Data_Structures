#include <stdio.h>
/*          
int fun(int m)
{
    
    if (m>0)
    {
        
        return fun(m-1)+n;
    }
    return 0;
}
*/

//                                with static variable
//                       same out with static and global variable in this case
int x=0;
int fun(int m)
{
    // static int x = 0;
    if (m>0)
    {
        x++;
        return fun(m-1)+x;
    }
    return 0;
}
void main()
{
    int a=5;
    printf("%d\n",fun(a));
    printf("%d\n",fun(a));
}
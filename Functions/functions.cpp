#include <iostream>
#include <stdio.h>

//_____________Call by value___________
/*int swap(int x,int y)
{
    int temp = x;
    x=y;
    y=temp;
    printf("x=%d and y=%d\n",x,y);
}
int main()
{
    int a,b;
    a=5;
    b=8;
    swap(a,b);
    printf("a=%d and b=%d",a,b);

    return 0;
}*/

// ______call by address_______
/*int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("x=%d and y=%d\n", *x, *y);
}
int main()
{
    int a, b;
    a = 5;
    b = 8;
    swap(&a, &b);
    printf("a=%d and b=%d", a, b);

    return 0;
}
*/
// __________Call by reference________
int swap(int &x,int &y)
{
    int temp = x;
    x=y;
    y=temp;
    printf("x=%d and y=%d\n",x,y);
}
int main()
{
    int a,b;
    a=5;
    b=8;
    swap(a,b);
    printf("a=%d and b=%d",a,b);
    
    return 0;
}

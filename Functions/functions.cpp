#include <iostream>
#include <stdio.h>
using namespace std;

//_____________Call by value___________if the formal parameters are changed it will not effect the actual paramters
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

// ______call by address_______it copie the addres of the actual parameter that means if any change made in formal parameters it will be refelected on the actual parameters.
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
/* __________Call by reference________it uses the concept of reference which is only supported by C++ and no C language ....
                                      means any changes made on the formal parameter will reflected in actual parameters.
*/
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

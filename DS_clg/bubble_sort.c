#include <stdio.h>
// void bubble_sort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int swapped = 0;
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            xaqxsux
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 swapped = i;
//             }
//         }
//         if (!swapped)
//         {
//             break;
//         }
//     }
// }
int main()
{
    int arr[20], n, i, a[5];
    printf("enter the no. of elements in array");
    scanf("%d", &n);
    printf("enter the elements in array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("elements in array before\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
            }
        }
    }
    printf("elements in array after\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

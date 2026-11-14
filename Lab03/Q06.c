#include <stdio.h>
#define size 10
int main()

{
    int a[size];

    printf("\nEnter %d Nos: ", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    int temp;

    printf("\nORIGINAL ARRAY .. ");
    for (int i = 0; i < size; i++)
    {
        printf("\n%d", a[i]);
    }
    for (int i = 0; i < size / 2; i++)
    {
        temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }

    printf("\nREVERSED ARRAY .. ");
    for (int i = 0; i < size; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}
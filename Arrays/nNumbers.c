#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The value of n %d\n", n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}
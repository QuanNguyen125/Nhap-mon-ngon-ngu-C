#include<stdio.h>

int main()
{
    int n, sum = 0, c, a[100];

    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("\nEnter %d integers \n", n);

    for(c = 0; c < n; c++)
    {
        scanf("%d", &a[c]);
        sum += a[c];    
    }

    printf("\nSum = %d\n", sum);
    return 0;
}

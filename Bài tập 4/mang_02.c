#include<stdio.h>

int main()
{
    int n, sum = 0, c, a[100];

    printf("nhap phan tu a: ");
    scanf("%d", &n);
    printf("\n nhap %d so nguyen \n", n);

    for(c = 0; c < n; c++)
    {
        scanf("%d", &a[c]);
        sum += a[c];    
    }

    printf("\nSum = %d\n", sum);
    return 0;
}

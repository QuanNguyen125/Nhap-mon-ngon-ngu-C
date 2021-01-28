#include <stdio.h>

int main(void) {
  int n,i;
  printf("nhap n \n");
  scanf("%d",&n);
  printf(" Cac so le\n");
  for (i=1;i<=n;i = i +2)
{
   printf(" %d",i);
}
  printf("\nso chan\n");
  for ( i=2;i<=n;i=i+2)
  printf(" %d",i);
  int tong;
  tong = i+n;
  printf("\ntong = %d",tong);
  return 0;
}

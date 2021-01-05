#include <stdio.h>

int main(void) 
{
  int i;
  printf("Nhap so nguyen i: ");
  scanf("%d", &i);
  int sum = 0;
  while(i > 0) {
    sum += i % 10;
    i /= 10;
  }
  printf("tong cac chu so cua n: %d\n", sum);
  return 0;
}

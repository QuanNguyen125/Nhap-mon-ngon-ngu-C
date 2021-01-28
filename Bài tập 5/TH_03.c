#include <stdio.h>
 
int main() {
  //khai bao bien
  int a,b,c;
  printf("Nhap so a: ");
  scanf("%d",&a);
  printf("Nhap so b: ");
  scanf("%d",&b);
  printf("Nhap so c: ");
  scanf("%d",&c);
  //dieu kien tim so lon nhat
  printf("So lon nhat: ");
  if(a>b&a>c) {
    printf("%d",a);
  }
  else if(b>a&b>c) {
    printf("%d",b);
  }
  else if(b>a&c>a) {
    printf("%d",c);
  }
  return 0;
}

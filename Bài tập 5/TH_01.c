#include <stdio.h>

int main(void) {
  printf("giai phuong trinh bac 2 x^2 + bx + c = 0\n");
  //khai bao bien
  int a,b,c;
  //nhap a b c
  printf("nhap a = ");scanf("%d",&a);
  printf("nhap b = ");scanf("%d",&b);
  printf("nhap c = ");scanf("%d",&c);
  //nhap lenh tinh delta
  int n = b*b - 4*a*c ;
  //khai bao nghiem x1 x2
  int x1,x2,x;
  //neu delta < 0 thi phuong trinh vo nghiem
  if (n < 0){
    printf("phuong trinh vo nghiem");
  }
  if(n == 0){
    //neu delta = 0 thi phuong trinh co nghiem kep
    x =(-b)/(2*a);
    printf("phuong trinh co nghiem kep x1 = x2 =%d",x);
  }
  if(n > 0){
    //neu delta > 0 thi phuong trinh co 2 nghiem phan biet 
    //x1
    x1 =(-b+(n))/(2*a);
    //x2 
    x2 =(-b-(n))/(2*a);
    printf("phuong trinh co 2 nghiem: \nx1=%d \nx2=%d",x1, x2);
  }
 
  return 0;
}

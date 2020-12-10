#include <stdio.h>

int main(void) {
  // khai bao bien
  int a;
  // nhap xuat gia tri
  printf("Nhap a = ");
  scanf("%d",&a);
  // kiem tra a la duong hay am
  if(a > 0){
    printf("%d la so duong",a);
  } else if(a==0) { 
    printf("%d bang khong",a);   
  } else {
    printf("%d la so am",a);
  }
  
    
  return 0;
}

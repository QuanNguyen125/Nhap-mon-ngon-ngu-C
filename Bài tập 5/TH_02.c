#include <stdio.h>

int main(){
  //khai bao bien
  int n,s=0;
  //nhap n
  printf("Nhap n = ");
  scanf("%d",&n);
  //tính phuong trinh so nguyen n bat ky
  for(int i = 1;i <= n;i++)
  //cong thuc tính
  s = s + i;
  printf("\nS=1+2+...+=%d\n",s);
  return 0; 
}

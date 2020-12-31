#include<stdio.h>
int main(void){
  // khai bao bien tong//
  int tong;
  //cho tong bang 0//
  tong =0;
  //khai bao bien de dem//
  int i, n;
  //cong thuc dem//
  scnaf("%d",&n);
  for(i=1;i<=n;i ++ )
  // phep tinh tong//
  tong = tong + i;
  //hien thi tong tu 1 den 10//
  printf("tong = %d\n \n",tong);
 return 0;

}

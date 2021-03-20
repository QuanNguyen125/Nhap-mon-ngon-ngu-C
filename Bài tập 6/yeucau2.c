#include<stdio.h>

int main() {
   int n,t;
   float tong = 0;
   printf("Nhap gia tri n = ");
   scanf("%d",&n);
   for(t=1;t<n;t++){
     tong += (float) t/t;
   }
   printf("1+1/2+1/3+...+1+1/n=%0.1f",tong);
   return 0;
}
   

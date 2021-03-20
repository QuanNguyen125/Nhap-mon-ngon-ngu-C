#include <stdio.h>

int main(void) {
  int n, tong = 0;
  printf("Nhap n = ");scanf("%d",&n);
  for(int t = 1; t < n; t++){
    if(n % t == 0){
      tong = tong + t;
    }
  }
  if(tong == n){
    printf("%d là so hoan hao\n",n);
  } else{
    printf("%d la so khong hoan hao\n",n);
  }
  return 0;
}

#include<stdio.h>
int main(){
  int a[100];
  int n;
  //kich thuoc mang a
  printf("Nhap n = ");
  scanf("%d",&n);
  int a[n];
  //Nhap phan tu cho mang a kich thuoc n
  //n = 3;
  printf("mang a: ");
  for(int i = 0; i < n; i++){
  printf("a[%d] = %d", i, a[1]);
}
int tong = 0;
//tong = a[0] + a[1] + a[2]
for(int j = 0,j < n,j++){
	tong = tong + a[j];
}
printf("\n");
printf("Tong: %d",tong);

int tong chan = 0;
for(int j = 0,j < n,j++){
	if(a[j] % 2 == 0)
	tong = tongchan + a[j];
}
printf("\n");
printf("Tong: %d",tongchan);

n = 4;
int dem_chan = 0;
a[0] = 1;
a[1] = 2;
a[2] = 3;
q[3] = 4;
//kiem tra a[0] co chan hay khong?
for(int i = 0; i < 4, i++){
if(a[i] % 2 == 0 && a[i] != 0)
   dem_chan = dem_chan + 1;
}
printf("So cac so chan: %d",dem_chan);
return 0;
}

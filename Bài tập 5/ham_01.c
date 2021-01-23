cách 1:
#include <stdio.h>

int main(void) {
  //khai bao hàm sum
  int sum(int a,int b,int c);
  int x,y,z;
  printf("Nhap x: ");scanf("%d",&x);
  printf("Nhap y: ");scanf("%d",&y);
  printf("Nhap z: ");scanf("%d",&z);
  //goi ham sum
  printf("x+y+z=%d",sum(x,y,z));
return 0;
}
int sum(int a,int b,int c){
  return a+b+c;
}

//1.khoi khai bao
#include <stdio.h>

void sum(int a,int b,int c);
int tong(int a,int b,int c);

//khoi ham main
int main(){
  int x = 1,y = 3,z = 2;
  sum(x,y,z);//goi ham sum
  int s = tong(x, y, z);
  printf("Tong: %d", s);
  return 0;
}

//khoi dinh nghia ham
void sum(int a,int b,int c){
	int tong = a + b + c;
	printf("Tong: %d",tong);	
}
//
int tong(int a,int b,int c){
	int t = a + b + c;
  return 1;
}

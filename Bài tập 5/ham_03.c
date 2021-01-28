//****************************************CODE**********
//Khoi khai bao
#include<stdio.h>
//khai bao ham
void Nhap_pt_mang(int a[]);
void Hien_thi_pt_mang(int a[]);
void Hien_thi_tong_chan(int a[]);
void Dem_chan_le_0(int a[]);
int n;
 //khoi ham main
int main(){
 //int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  //Hien_thi_pt_mang(a);
  //Hien_thi_tong_chan(a);
  //Dem_chan_le_0(a);
  return 0;
}
//khoi dinh nghi ham
void Nhap_pt_mang(int a[]){
  //int n;
  for(int i = 0;i < n;i++){
    printf("a[%d] = ",i);
    scanf("%d",&a[i]);
  }
}
void Hien_thi_pt_mang(int a[]){
  
}
void Hien_thi_tong_chan(int a[]){

}
void Dem_chan_le_0(int a[]){

}

// khoi dinh nghia ham

//*************************END CODE*****************************

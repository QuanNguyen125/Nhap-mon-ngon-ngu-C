#include <stdio.h>

int main(void) {
  // khai bao gia tri//
  int a, b;
  // khai bao don gia//
  printf("Nhap don gia hang hoa: ");
  scanf("%d",&a);
  // khai bao so luong//
  printf("Nhap so luong hang hoa: ");
  scanf("%d",&b);
  int dongia, giatri, thanhtien;
  // cong thuc don gia * so luong = thanh tien//
  thanhtien = a * b;
  printf("thanh tien "),
  printf("=%d",thanhtien);

  return 0;
}

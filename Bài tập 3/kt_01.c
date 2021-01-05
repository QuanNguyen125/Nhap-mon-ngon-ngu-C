#include <stdio.h>

int main(void) {
  printf("\n----BẢNG CỬU CHƯƠNG----\n");
  for( int i = 1; i <= 9; i++ ){
    printf("\n----BẢNG NHÂN %d----\n",i);
    for( int j = 1; j < 9; j++ ){
      printf("\t%d * %d=%d\n",i ,j, i*j);
    }
  }
  return 0;
}

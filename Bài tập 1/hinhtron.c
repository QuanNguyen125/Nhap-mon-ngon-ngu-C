#include <stdio.h>

int main(void) {
  // khai báo biến DT,CV,R
  double DT,CV,R;
  // gán giá trị biến R
  R = 1.5;
  // khai báo hằng PI 
  const double PI = 3.14;
  // gắn gí trị DT,CV
  CV = 2 * R * PI;
  DT = R * R * PI;
  // hiển thị R,CV,DT theo 2 hàng 3 cột;
  printf ("CV = %0.1f\n",CV);
  printf ("DT = %0.1f",DT);
  return 0;
}

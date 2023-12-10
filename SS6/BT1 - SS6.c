#include <stdio.h>
  int main() {
 int n;
 printf (" nhap so nguyen n (1 <= n <= 9):");
 scanf("%d",&n);
 if (n >= 1 && n <= 9) {
     printf("Bảng cửu chương %d:\n", n);
     for (int i = 1; i <= 9; i++) {
         int ket_qua = n * i;
         printf("%d x %d = %d\n", n, i, ket_qua);
     }
 } else {
     printf("Đầu vào  không hợp lệ. Vui lòng nhập số nguyên n trong khoảng từ 1 đến 9.\n");
 }
     return 0;

}

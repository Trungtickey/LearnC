# include <stdio.h>
#include<string.h>
  int main(void) {
//      int y,x;
//      printf("Nhap do dai (mang mot chieu) trong mang hai chieu: ");
//      scanf("%d",&y);
//      printf("Nhap do dai ( so phan tu ) trong mang 1 chieu:");
//      scanf("%d",&x);
//
//      int array[y][x];
//      printf("Nhap phan tu:\n");
//      for(int i = 0; i < y; i++ ) {
//          for (int j = 0; j < x; j++) {
//              scanf("%d", &array[i][j]);
//          }
//      }
//      printf("Mang vua nhap:\n");
//      for(int i = 0; i < y; i++ ){
//          for (int j = 0; j < x; j++) {
//              scanf("%d", &array[i][j]);
//          }
//      printf("\n");
//      }
//}
              // SAO CHEP MANG //
//      short data1[2][10]={
//              {5,6,7,8,9,10,11,12,13,14},
//              {15,16,17,18,19,20,21,22,23,24},
//      };
//      short data2[2][10];
//      for(int i = 0; i < 2; i++) {
//          for(int j = 0; j < 10; j++) {
//              data2[i][j] = data1[i][j];
//          }
//      }
////Kiểm tra mảng mới
//      printf("mang data2 sau khi copy: \n");
//      for(int i = 0; i < 2; i++) {
//          for(int j = 0; j < 10; j++) {
//              printf(" %d ", data2[i][j]);
//          }
//          printf("\n");
//      }
//  };

int y,x;
int src[2][5]= {{1, 2, 3, 4, 5},
                  { 6, 7, 8, 9, 10}};

int data[2][5];
memcpy((void *)data, (void *)src, sizeof(src));
  for(int i = 0; i < 2; i++){
      for(int j = 0; j < 5; j++){
          printf("%d ", data[i][j]);
      }

  }
}

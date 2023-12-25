#include<stdio.h>
void inp(int *a,int m){
    for(int i=0;i<m;i++){
        printf("nhap gia tri thu %d: ",i);
        scanf("%d",a+i);
    }

}



void outp(int *a, int m){
    printf("mang vua nhap la: ");
    for(int i=0;i<m;i++){
        printf("%d\n",*(a+i));
    }
}

   int main(){
       int a[100];
       int m;
       printf("nhap so luong phan tu trong mang: ");
       scanf("%d",&m);

       inp(a,m);

       outp(a,m);

       return 0;
   }
//      int num[3] = {1, 2, 3}, *p;
//      p = num;
////      Gán địa chỉ biến cho con trỏ
//      char a = 'M', *p1;
//      p1 = &a;
//      //Gán địa chỉ cấu trúc cho con trỏ
//       complex_t x = {1.2,3.4}, *p2;
//       complex_t *p2 = &x;
//int nums[] = {10, 20, 30 ,44, 55}, *p;
//    p = nums;
////    printf("%d\n", p);
//       printf("array[0] address: %d\n", p);//Địa chỉ phần tử đầu tiên
//       printf("array[1] address: %d\n", p +1);//Địa chỉ phần tử thứ ha
//       printf("array[3] address: %d\n", p +3);//Địa chỉ phần tử thứ tư
//       return 0;
//         int nums[100], *p;
//         p = nums;
//         printf("Nhap mun[0] = ");
//         scanf("%d", p);
//       printf("Nhap nums[1] = ");
//       scanf("%d", (p +1));
////Nhập giá trị tại địa chỉ phần tử thứ ba
//       printf("Nhap nums[2] = ");
//       scanf("%d", (p +2));
//       printf("nums[0]= %d\n", nums[0]);
//       printf("nums[1]= %d\n", nums[1]);
//       printf("nums[2]= %d\n", nums[2]);
//       return 0;
         /*Tạo hàm nhập mảng 1 chiều trong C*/

//         int a[100], n, *p;
//         input_array(a, n);
//      int input_array(int *a, int n){
//          int i;
//          printf("Nhap phan tu cua mang: ");
//          scanf("%d", n);
//
//          for(i=0; i < n; i++){
//              printf("Nhap a[%d]", i);
//              scanf("%d", a+i);
//          }
//      }
//
//}


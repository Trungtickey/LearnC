#include<stdio.h>
#include<stdlib.h>
intmain(void){
    int y , x;
    printf("Nhap so hang va so cot cua mang 2 chieu: ");
    scanf("%d", &y);
    scanf("%d", &x);
    int *nums2;
//Cấp phát bộ nhớ động cho 1 mảng gồm y×x phần tử
//Gán địa chỉ mảng trên vào con trỏ nums2
    nums2 =malloc(sizeof(int) * x * y);
    for(int i =0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d", &nums2[i * x + j]);//Gán giá trị nhập từ bàn phím vào
        }
    }
    //In và kiểm tra mảng 2 chiều vừa khai báo
    printf("Mang 2 chieu vua nhap\n");

    for(int i =0; i < y; i++) {
        for(int j =0; j < x; j++) {
            if(j < x-1) {
                printf("%d ", nums2[i * x + j]);
            }else {
                printf("%d\n", nums2[i * x + j]);
            }
        }
    }
//    Vòng lặp đầu tiên:
//    i=0 thỏa đk i < y = 3 => chạy vòng lặp for bên trong.
//    j=0 thỏa đk j < x = 3 chạy cây if
//    đk if j < 3-1=2 thỏa => xuất nums2[0 * 3 + 0] = nums2[0] và lặp lại đến khi ra false thì xuống câu lệnh else để xuống dòng và in ra tiếp dòng thứ 2
//    tăng i lên 1 và bắt đầu vòng lặp for thứ 1
// Giải phóng bộ nhớ
    free(nums2);
    return 0;
}

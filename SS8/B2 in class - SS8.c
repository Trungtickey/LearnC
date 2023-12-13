#include <stdio.h>
   int main(){
    int n;
    printf("Nhap so phan tu cua mang mot chieu:");
    scanf("%d", &n);
    float numbers[n];
    for(int i = 0; i < sizeof(numbers)/sizeof(float); i++){
        printf("number[%d]=", i);
        scanf("%d", &numbers[i]);
    }
    float sumNumbers = 0;
    for( int i = 0; i < sizeof(numbers)/sizeof(float); i++){
        sumNumbers + numbers[i];
    }
    float avgNumbers = sumNumbers/(sizeof(numbers)/sizeof(float));
    printf(" Trung binh cac phan tu trong mang la: %.2f\n", avgNumbers);
}

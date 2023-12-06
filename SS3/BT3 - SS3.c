#include <stdio.h>
 int main(){
    float t , v , a;
    printf("Nhap diem toan:");
    scanf("%f", &t);
    printf("Nhap diem van:");
    scanf("%f",&v);
    printf("Nhap diem anh:");
    scanf("%f", &a);
    printf("Tong diem la: %.1f\n", t+v+a);
    printf("Diem trung binh la: %.1f\n", (t+v+a)/3);
    return;
}
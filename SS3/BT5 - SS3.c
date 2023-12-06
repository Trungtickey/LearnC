#include <stdio.h>
 int main(){
    int thousandDigit, hundredDigit, dozenDigit, unitDigit;
    printf("Nhap so hang nghin:");
    scanf("%d", &thousandDigit);
    printf("Nhap so hang tram:");
    scanf("%d", &hundredDigit);
    printf("Nhap so hang chuc:");
    scanf("%d", &dozenDigit);
    printf("Nhap so hang don vi:");
    scanf("%d", &unitDigit);
    printf("Tong cac chu so cong lai %d %d %d %d\n", thousandDigit + hundredDigit + dozenDigit + unitDigit );
    printf("Chuoi dao nguoc %d %d %d %d\n", unitDigit, dozenDigit, hundredDigit, thousandDigit );
    return;
}
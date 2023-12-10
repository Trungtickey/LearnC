#include<stdio.h>
 int main() {
    double DoanhThu, HoaHong;
    printf("Nhap doanh thu ban hang cua dai ly:");
    scanf("%lf", &DoanhThu);
    if ( DoanhThu <= 100000000 ) {
        HoaHong = DoanhThu * 0.05;
    } else if ( DoanhThu <= 300000000 ) {
        HoaHong = DoanhThu * 0.1;
    } else if ( DoanhThu > 300000000) {
        HoaHong = DoanhThu * 0.2;
    }
    printf("Tong hoa hong dai ly ban duoc la: %.2lf ", HoaHong);

    return 0;
}
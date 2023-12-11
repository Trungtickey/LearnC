#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c , x1, x2;
    double delta = pow(b,2) - 4 * a * c;
    printf("nhap he so a:");
    scanf("%lf",&a);
    printf("nhap he so b:");
    scanf("%lf",&b);
    printf("nhap he so c:");
    scanf("%lf",&c);
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2= (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep:\n");
        printf("x = %.2lf\n", x1);
    } else {
        printf("phuong trinh vo nghiem.\n");
    }
    return 0;
}
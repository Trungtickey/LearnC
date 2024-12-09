  #include <stdio.h>
int main() {
    float chv, dhcn, rhcn, bkht, Pi = 3.14;
    printf("chv:");
    scanf("%f", &chv);
    printf("dhcn:");
    scanf("%f", &dhcn);
    printf("rchn:");
    scanf("%f", &rhcn);
    printf("bkht:");
    scanf("%f", &bkht);

    printf("Dien tich hinh vuong %.2f - Chu vi hinh vuong %.2f\n", chv * chv, 4 * chv);
    printf("Dien tich hinh chu nhat %.2f - Chu vi hinh chu nhat %.2f\n", dhcn * rhcn, (dhcn + rhcn) * 2);
    printf("Chu vi hinh tron %.2f - Dien tich hinh tron %.2f\n", 2 * Pi * bkht, Pi * bkht * bkht);
    return 0;

}

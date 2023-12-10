#include <stdio.h>
 int main() {
    int num;
    int sum = 0;
    for( int i = 1; i <= 5; ++i) {
        printf("Nhap so :");
        scanf("%d", &num);
        if (num < 0) {
            continue;
        }
        sum += num;
    }
        printf("sum = %d\n", sum);


}

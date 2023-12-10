#include <stdio.h>
 int main() {
    int n, sum = 0;
    do {
        printf(" nhap so n:");
        scanf("%d",&n);
        sum+= n;
    } while ( n>0 );
    printf("sum = %d\n", sum);
}
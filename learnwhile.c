#include <stdio.h>
 int main(){
    int n, sum = 0;
    printf ("Nhap bien n:");
    scanf("%d",&n);
    while (n > 0 ) {
        sum += n % 10;
        n /= 10;
    }
    printf ("sum = %d", sum);
}


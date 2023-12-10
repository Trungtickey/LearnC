#include <stdio.h>
 int main() {
    int num = 0;
    for (int i = 1; i <=10; i++) {
        num += i;
        printf("%d\n", num);
    }
    printf("num = %d\n", num) ;
    printf("End loop!\n");
    return 0;
}
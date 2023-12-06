#include <stdio.h>
int main(){
    int num;
    printf("Nhap so:");
    scanf("%d",&num);
    if( num % 3==0 && num % 5==0) {
        printf("chia het cho 3 va 5");
    } else {
        printf("khong the chia het cho ca 3 va 5");
    }

return;
}

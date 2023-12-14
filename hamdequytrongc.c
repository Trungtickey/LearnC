#include <stdio.h>
int sum(int);
int main(){
    int number, result;
    printf("Nhap so:");
    scanf("%d", &number);
    result = sum(number);
    printf("sum = %d", result);
    return 0;
}
    int sum (int n){
    if (n <= 1) {
        return 0;
    }
    else if (n % 2 == 0){
        return n + sum(n - 2);
    }
    else {
        return n;
    }
}

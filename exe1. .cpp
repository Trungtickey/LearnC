#include<stdio.h>
int main() {
    int sum = 0;
    int n;
    for(int i = 0; i <= 10; i++){
        printf("Enter a number:");
        scanf ("%d",&n);
        if(n <= 0) {
        break;
        }
        sum += n;
    }
    printf("sum = %d\n",sum);
}
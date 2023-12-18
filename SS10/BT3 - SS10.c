#include <stdio.h>
int isPalindrome(int n){
    int reversed = 0, remainder, original = n;
    while (n != 0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}
int main(){
    int x;
    printf("Nhap so x: ");
    scanf("%d", &x);

    printf("OUTPUT:\n");
    if (isPalindrome(x)){
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
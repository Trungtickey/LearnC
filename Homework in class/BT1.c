#include <stdio.h>
    int Fibonacci(int n){
    int a = 0, b = 1, temp;
    while (b < n){
        temp = b;
        b = a + b;
        a = temp;
    }
    return ( b == n);
}
    int main(){
    int n, m;
    printf("Nhap so dong n: ");
    scanf ("%d", &n);
    printf("Nhap so cot m: ");
    scanf ("%d", &m);

    int a[n][m];
    printf("Nhap mang 2 chieu: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("a[%d][&d] = ", i, j);
            scanf("%d\t", &a[i][j]);
        }
    }
    printf("Cac so fibonacci la: ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(Fibonacci(a[i][j])){
                printf("%d\t", &a[i][j]);
            }
        }
    }
    return 0;

}

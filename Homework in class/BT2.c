#include <stdio.h>
void swapRows(int a[][4], int row1, int row2, int cols){
    for (int i = 0; i < cols; i++){
        int temp = a[row1][i];
        a[row1][i] = a[row2][i];
        a[row2][i] = temp;
    }
}
int main(){
    int n, m;
    printf("Nhap so dong n: ");
    scanf("%d", &n);
    printf("nhap so cot m: ");
    scanf("%d", &m);
    int a[n][m];
    printf("Nhap mang 2 chieu:\n ");
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int n1, n2;
    printf("Nhap hai hang can hoan vi (tu 0 den %d): ",n - 1);
    scanf("%d %d", &n1, &n2);
    if (n1 > 0 && n1 < n && n2 >= 0 && n2 < n){
        swapRows(a , n1, n2, m );
        printf("Mang sau khi hoan vi hai hang:\n");
        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                printf("%d", a[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Hang nhap khong hop le. \n");
    }
    return 0;
}

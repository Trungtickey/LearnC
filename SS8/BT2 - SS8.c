#include <stdio.h>

int main() {
    int row, col;
    printf("Nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &col);
    int arr[row][col];

    printf("Nhap gia tri cac phan tu cua mang: ");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    printf("Cac phan tu co gia tri chan trong mang la: ");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] % 2 == 0) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            }
        }
    }

    printf("\nTong cac phan tu co gia tri trong mang la: %d\n", sum);

    return 0;
}
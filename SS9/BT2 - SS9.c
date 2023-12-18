#include<stdio.h>
   int main(){
    int m,n;
    int sum;
    printf("Nhap phan tu m:");
    scanf("%d", &m);
    printf("Nhap phan tu n:");
    scanf("%d", &n);
    int a[m][n];
    while(1){
        printf("1. Nhap gia tri cac phan tu cua mang:\n");
        printf("2. In ra ca gia tri cua mang theo ma tran:\n");
        printf("3. In ra cac gia tri cau phan tu la le va tinh tong:\n");
        int chucNang;
        printf("Chon:");
        scanf("%d", &chucNang);
        switch(chucNang){
            case 1:
                for (int i = 0; i < m; i++){
                    for(int j = 0; j < n; j++){
                        printf("%d", a[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                for (int i = 0; i < m; i++){
                    for(int j = 0; j < n; j++){
                        printf("%d", a[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                sum = 0;
                for (int i = 0; i < m; i++){
                    for(int j = 0; j < n; j++){
                        if(a[i][j] % 2 != 0){
                            printf("So le:%d\n", a[i][j]);
                            sum += a[i][j];
                            printf("\n");
                        }
                    }
                }
                printf("Tong so le:%d\n", sum);
                break;
            default:
                printf("khong co lua chon");
                printf("\n");
                break;

        }
    }
    return 0;
}

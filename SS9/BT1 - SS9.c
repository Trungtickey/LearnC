#include <stdio.h>
  int main(){
    int a[100];
    int n, sum;
    while(n<100){
        printf("Nhap so phan tu can nhap va gia tri cac phan tu:\n");
        printf("In ra cac gia tri phan tu dang quan ly:\n");
        printf("In ra cac gia tri cua phan tu chan va tinh tong:\n");
        int chucNang;
        printf("Chon:");
        scanf("%d", &chucNang);
        switch(chucNang){
            case 1:
                printf("Nhap so phan tu can nhap:");
                scanf("%d", &n);
                for (int i = 0; i < n; i++){
                    printf("Nhap gia tri thu %d:", i);
                    scanf("%d", &a[i]);
                }
                break;
            case 2:
                if ( n == 0){
                    printf("Khong co gia tri\n");
                } else {
                    printf("Gia tri cac phan tu dang quan ly:\n");
                    for(int i = 0; i < n; i++){
                        printf("%d\n", a[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                sum = 0;
                for(int i = 0; i < n; i++){
                if( a[i] % 2 == 0 ){
                    printf("so chan:%d\n",a[i]);
                    sum += a[i];
                    printf("\n");
                   }
                }
                printf("Tong so chan: %d\n", sum);
                break;
        }
    }
    return 0;
}
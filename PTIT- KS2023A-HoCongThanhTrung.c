#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100

void nhapMang(int a[MAX_SIZE][MAX_SIZE], int n, int m){
     printf("Nhap gia tri cac phan tu cua mang:\n");
     for(int i = 0; i < n; i++){
         for( int j = 0; j < m; j++){
             printf("a[%d][%d]", i, j);
             scanf("%d", &a[i][j]);
         }
     }
}
void inTheoMaTran(int a[MAX_SIZE][MAX_SIZE], int n, int m){
      printf("Gia tri cac phan tu trong mang theo ma tran:\n");
      for(int i = 0; i < n; i++){
          for (int j = 0; j < m; j++){
              printf("%d\t", a[i][j]);
          }
          printf("\n");
      }
}
int demChiaHet(int a[MAX_SIZE][MAX_SIZE], int n, int m){
     int dem = 0;
     for(int i = 0; i < n; i++){
         for (int j = 0; j < m; j++){
             if(a[i][j] % 2 == 0 && a[i][j] % 3 == 0) {
                 dem++;
             }
         }
     }
     return dem;
}
void inDuongBienCheo(int a[MAX_SIZE][MAX_SIZE], int n, int m){
     printf("Cac phan tu nam tren duong bien, duong cheo chinh va duong cheo phu:\n");
     for( int i = 0; i < n; i++){
         printf("%d\t", a[i][0]);
         printf("%d\t", a[i][m - 1]);
     }
     for(int j = 1; j < m; j++){
         printf("%d\t", a[0][j]);
         printf("%d\t", a[n - 1][j]);
     }
     printf("\nDuong cheo chinh: ");
     for(int i = 0; i < n; i++){
         printf("%d\t", a[i][i]);
     }
     printf("\nDuong cheo phu: ");
     for (int i = 0; i < n; i++){
         printf("%d\t", a[i][n - i - 1]);
     }
     printf("\n");
}

void sapXepTangTheoCot(int a[MAX_SIZE][MAX_SIZE], int n, int m){
      for(int j = 0; j < m; j++){
          for(int i = 0; i < n - 1; i++){
             for(int k = i + 1; k < n; k++){
                 if(a[i][j] > a[k][j]){
                     int temp = a[i][j];
                     a[i][j] = a[k][j];
                     a[k][j] = temp;
                 }
             }
          }
      }
}
int laSoNguyenTo(int num){
    if(num < 2){
        return 0;
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
void inSoNguyenTo(int a[MAX_SIZE][MAX_SIZE], int n, int m){
    printf("Cac phan tu la so nguyen to trong mang:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(laSoNguyenTo(a[i][j])){
              printf("%d\t", a[i][j]);
            }
        }
    }
    printf("\n");
}

void sapXepGiamTheoDuongCheoChinh(int a[MAX_SIZE][MAX_SIZE], int n, int m) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j][j] < a[j + 1][j + 1]) {
                int temp = a[j][j];
                a[j][j] = a[j + 1][j + 1];
                a[j + 1][j + 1] = temp;
            }
        }
    }
}

void chenMang1ChieuVaoMaTran(int a[MAX_SIZE][MAX_SIZE], int n, int m, int b[MAX_SIZE], int k) {
    if (k < 0 || k >= n) {
        printf("Chi so dong muon chen khong hop le.\n");
        return;
    }

    printf("Nhap gia tri mang 1 chieu can chen:\n");
    for (int i = 0; i < m; i++) {
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (int i = n - 1; i > k; i--) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i - 1][j];
        }
    }

    for (int j = 0; j < m; j++) {
        a[k][j] = b[j];
    }
}
int main(){
    int n, m;
    int menuChoice;
    int a[MAX_SIZE][MAX_SIZE];
    int b[MAX_SIZE];

    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int choice;
    do {
        printf("************************MENU**************************\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu trong mang theo ma tran\n");
        printf("3. Tinh so luong cac phan tu chia het cho 2 va 3 trong mang\n");
        printf("4. In cac phan tu va tong cac phan tu nam tren duong bien, duong cheo chinh va duong cheo phu\n");
        printf("5. Su dung thuat toan sap xep lua chon sap xep cac phan tu tang dan theo cot cua mang\n ");
        printf("6. In ra cac phan tu la so nguyen to trong mang\n");
        printf("7. Su dung thuat toan noi bot sap xep cac phan tu tren duong cheo chinh cua mang giam dan\n");
        printf("8. Nhap gia tri mot mang mot chieu gom m phan tu va chi so dong muon chen vao mang, thuc hien chen vao mang hai chieu\n");
        printf("9. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                nhapMang(a, n, m);
                break;
            case 2:
                inTheoMaTran(a, n, m);
                break;
            case 3:
                printf("So luong phan tu chia het cho 2 va 3: %d\n", demChiaHet(a, n, m));
                break;
            case 4:
                inDuongBienCheo(a, n, m);
                break;
            case 5:
                sapXepTangTheoCot(a, n, m);
                inTheoMaTran(a, n, m);
                break;
            case 6:
                inSoNguyenTo(a, n, m);
                break;
            case 7:
                sapXepGiamTheoDuongCheoChinh(a, n, m);
                inTheoMaTran(a, n, m);
                break;
            case 8:
                printf("Nhap gia tri mang 1 chieu:\n");
                int a1[100];
                for (int i = 0; i < m; ++i) {
                    printf("Nhap a1[%d]: ", i);
                    scanf("%d", &a1[i]);
                }

                int dongChen;
                printf("Nhap dong muon chen vao mang 2 chieu: ");
                scanf("%d", &dongChen);

                chenMang1ChieuVaoMaTran( m, a, dongChen, n, m);
                inTheoMaTran(a, n + 1, m);
                break;
            case 9:
                printf("Chuong trinh ket thuc.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 9);

    return 0;
}



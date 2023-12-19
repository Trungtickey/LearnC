//#include <stdio.h>
//int main() {
//    int day;
//    printf("Enter the day: ");
//    scanf("%d", &day);
//    switch (day) {
//        case 2:
//            printf("Monday");
//            break;
//        case 3:
//            printf("Tuesday");
//            break;
//        case 4:
//            printf("Wednesday");
//            break;
//        case 5:
//            printf("Thursday");
//            break;
//        case 6:
//            printf("Friday");
//            break;
//        case 7:
//            printf("Saturday");
//            break;
//        case 8:
//            printf("Sunday");
//            break;}
//}
#include <stdio.h>

#define MAX_SIZE 100

void nhapMaTran(int a[MAX_SIZE][MAX_SIZE], int n, int m) {
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[MAX_SIZE][MAX_SIZE], int n, int m) {
    printf("Gia tri cac phan tu trong mang theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int demChiaHet(int a[MAX_SIZE][MAX_SIZE], int n, int m) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 2 == 0 && a[i][j] % 3 == 0) {
                dem++;
            }
        }
    }
    return dem;
}

void inDuongBienCheo(int a[MAX_SIZE][MAX_SIZE], int n, int m) {
    printf("Cac phan tu tren duong bien, duong cheo chinh, va duong cheo phu:\n");

    // In duong bien
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i][0]); // Duong bien trai
        printf("%d\t", a[i][m - 1]); // Duong bien phai
    }
    for (int j = 1; j < m - 1; j++) {
        printf("%d\t", a[0][j]); // Duong bien tren
        printf("%d\t", a[n - 1][j]); // Duong bien duoi
    }

    // In duong cheo chinh
    printf("\nDuong cheo chinh: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i][i]);
    }

    // In duong cheo phu
    printf("\nDuong cheo phu: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i][n - i - 1]);
    }
    printf("\n");
}

void sapXepTangTheoCot(int a[MAX_SIZE][MAX_SIZE], int n, int m) {
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
                if (a[i][j] > a[k][j]) {
                    // Hoan vi
                    int temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
                }
            }
        }
    }
}

int laSoNguyenTo(int num) {
    if (num < 2) {
        return 0; // Khong phai so nguyen to
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Khong phai so nguyen to
        }
    }
    return 1; // La so nguyen to
}

void inSoNguyenTo(int a[MAX_SIZE][MAX_SIZE], int n, int m) {
    printf("Cac phan tu la so nguyen to trong mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laSoNguyenTo(a[i][j])) {
                printf("%d\t", a[i][j]);
            }
        }
    }
    printf("\n");
}

void sapXepGiamTheoDuongCheoChinh(int a[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j][j] < a[j + 1][j + 1]) {
                // Hoan vi
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

    // Chen mang 1 chieu vao ma tran
    for (int i = n - 1; i > k; i--) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i - 1][j];
        }
    }

    for (int j = 0; j < m; j++) {
        a[k][j] = b[j];
    }

    n++; // Tang so hang cua ma tran len 1
}

int main() {
    int n, m;
    int menuChoice;
    int a[MAX_SIZE][MAX_SIZE];
    int b[MAX_SIZE];

    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    do {
        printf("************************MENU**************************\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu trong mang theo ma tran\n");
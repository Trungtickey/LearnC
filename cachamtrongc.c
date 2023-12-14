#include <stdio.h>
#include<stdlib.h>

//int main(){
//    FILE *fp;
//    char str[60];
//    fp = fopen("Baitapc.txt","r");
//    if (fp == NULL){
//        perror("Xay ra loi trong khi doc file");
//        return(-1);
//    }
//    if ( fgets (str, 60, fp) != NULL )
//    {
//        puts(str);
//    }
//    fclose(fp);
//    return (0);
//}


int cmp (const void * a, const void * b ){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
};

int main (){
//    int n;
//    printf("Truoc khi sap xep, list co dang: \n");
//    for( n = 0 ; n < 5; n++ )
//    {
//        printf("%d ", values[n]);
//    }
//    qsort(values, 5, sizeof(int), cmpfunc);
//    printf("\nSau khi sap xep, list co dang: \n");
//    for( n = 0 ; n < 5; n++ )
//    {
//        printf("%d ", values[n]);
//    }
//    return(0);
//}
printf(" Moi nhap vao gia tri mang 2 chieu:\n");
int x,y;
printf("Nhap cot:");
scanf("%d", &x);
printf("Nhap hang:");
scanf("%d", &y);
int a[x][y];

for ( int i; i < x; i++){
    for (int j; j < y; j++){
        printf("nhap phan tu cot %d hang %d:", i, j);
        scanf("%d", &a[i][j]);
    }
}
  printf("Mang truoc khi sap xep:\n");
for( int i = 0; i < x; i++){
    for (int j = 0; j < y; j++){
        printf("%d", a[i][j]);
    }
     printf("\n");
}
for (int i = 0; i < x; i++){
    qsort(a[i], x, sizeof(int), cmp );
}
printf("Gia tri cua mang sau khi sap xep:\n");
for (int i = 0; i < x; i++){
    for (int j = 0; j < y; j++){
        printf("%d", a[i][j]);
    }
    printf("\n");
}
return 0;




};

#include <stdio.h>
//    int find_sum(int a, int b) {
//        int sum = a + b;
//        return sum;
//    }
//    int main(void){
//    int sum = find_sum(1,2);
//    printf ("%d", sum);
//    return 0;
//}
   #include <stdio.h>
   #include <string.h>
 int main(void){
    printf("Nhap chuoi ki tu:");

    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    printf("Do dai chuoi: %d", len);
    return 0;
}

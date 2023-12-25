#include<stdio.h>
#include<string.h>
//   int main(){
//    int* pc, c;
//    c = 18;
//    printf("Nhap dia chi cua c: %p\n", &c);
//    printf("Gia tri cau c: %d\n\n", c);
//    pc = &c;
//    printf("Dia chi cua con tro pc: %p\n", pc);
//    printf("noi dung cua con tro pc: %d\n\n", *pc);
//    c = 10;
//    printf("Dia chi cua con t5ro pc: %p\n", pc);
//    printf("Noi dung cua con tro pc: %d\n\n", *pc);
//    *pc = -2;
//    printf(" Dia chi cua c: %p\n", &c);
//    printf("Gia tri cua c: %d\n", c);
//    return 0;
//}
//void add(int* p1, int* p2){
//    (*p1) += 2;
//    (*p2) += 3;
//}
//int main (){
//    int* pa, a = 5;
//    int* pb, b = 6;
//    pa = &a;
//    pb = &b;
//    add(pa, pb);
//    printf("%d\n", a);
//    printf("%d\n", b);
//    return 0;
//}
//#include<stdio.h>
//   int main(){
//   int a[10];
//   int *ptr = a;
//   int sum=0;
//
//   for(int i=0; i<10; i++){
//       printf("Nhap gia tri cua phan tu thu %d: ", i);
//       scanf("%d", ptr+i);
//   }
//   for(int i=0; i<10; i++){
//       sum += *(ptr+i);
//   }
//   printf("Tong gia tri cua mang: %d", sum);
//   return 0;
//
//
//}
   #include<stdio.h>
   #include<string.h>
//char* chuoi="siuuuuuuuu";
//int main(){
//    int length=strlen(chuoi);
//    printf("lenght of string: %d\r\n", length);
//    return 0;
//}
//int main(){
//    char a[100];
//    char *b = a;
//    int length = 0;
//    printf("Nhap chuoi:");
//    scanf_s("%s",a);
//    while(*b != '\0') {
//        length++;
//        b++;
//    }
//    printf("do dai cua chuoi la: %d", length );
//    return 0;
//
//}
//    char a[100];
//    char *b=a;
//    printf("Nhap chuoi:");
//    scanf("%s",a);
//
//
//    int length=strlen(b);
//    printf("length of string: %d\n",length);
//    return 0;
//}
//int str_ln(char*);
//
//int main() {
//    char str[20];
//    int length;
//
//    printf("\nNhap chuoi bat ky: ");
//    gets(str);
//
//    length = str_ln(str);
//    printf("\nDo dai chuoi %s la: %d", str, length);
//    return(0);
//}
//
//int str_ln(char*p)
//{
//    int i = 0;
//    while (*p != '\0') {
//        i++;
//        p++;
//    }
//    return i;
//}

//    void printReversedArray(int *arr, int size){
//        int *ptr = arr + size - 1;
//        while (ptr >= arr){
//            printf("%d\n", *ptr);
//            ptr--;
//        }
//        printf("\n");
//    }
// int main(){
//    int arr[] = {1, 2, 3, 4, 5};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    printf("Mang theo chieu dao nguoc: ");
//    printReversedArray(arr, size);
//    return 0;
//}
                             // học tiếp bài con trỏ//
int main() {
//    char a[] ="Hello", *p1;
//    p1 = a;
//    char b[100], *p2;
//    p2 = b;
//}
//    char *p = "Hello";
//    printf("%d\n", p);
//    return 0;
//      char a[]= "Hello", *p;
//      int i;
//      p = a;
//
//      for (i = 0; i < strlen(p); i++){
//          if(i % 2 == 0);
//          printf("array[%d] address : %d\n", i, p+i);
//      }
// Truy xuất các kí tự trong chuỗi bằng con trỏ//
//       char *a = "Hello", *p;
//       p = a;
//       printf("%c\n", a[2]);
//       printf("%c\n", *(p + 2));
//       printf("%c\n", a[4]);
//       printf("%c\n", *(p + 4));
//       return 0;
//}
// nhạp chuỗi thông qua mảng//
//    char str[100];
//    scanf("%s", str);
    // Nhập chuỗi bằng con trỏ//
    char str1[100], *p;
    p = str1;
    printf("Nhap chuoi: ");
    gets(p);
    puts(p);
    while(*p !='\0') {
        scanf("%c", *p);
        p++;
    }
//    for (int i = 0; i < strlen(p); i++) {
//        printf("%c", *p);
//    }
}
//********************Khai báo chuỗi bằng con trỏ trong C************************//





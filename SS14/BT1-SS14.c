#include <stdio.h>
  int main(){
    int val = 10;
    int *ptr;

    ptr = &val;
    printf("Gia tri cua val: %d\n", val);
    printf("Dia chi cua cal: %p\n\n", &val);

    printf("Gia tri cua val thong qua ptr: %d\n", *ptr);
    printf("Dia chi cua val thong qua ptr: %p\n", ptr);
    return 0;
}


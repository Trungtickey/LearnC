#include <stdio.h>
  int main(){
    int numbers[5];
    for (int i = 0; i < 5; i++){
        printf("numbers[%d]=",i);
        scanf("%d", &numbers[i]);
    }
    printf("Gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < 5; i++){
        printf("%d\n", numbers[i]);
    }
}

#include <stdio.h>
 int main(){
    int Number1, Number2, Number3;
    printf("So thu nhat la:");
    scanf("%d", &Number1);
    printf("So thu hai:");
    scanf("%d",&Number2);
    printf("So thu ba:");
    scanf("%d", &Number3);
    int max = Number1, min = Number1;
    if(max<Number2){max=Number2;}
    if(max<Number3){max=Number3;}
    if(min>Number2){min=Number2;}
    if(min>Number3){min=Number3;}
    printf("Max la:%d - Min la:%d ", max, min );
    return;

}
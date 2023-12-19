//#include<stdio.h>
//void main (){
//    int i, j, temp, arr[5]= {23, 90, 9, 25, 16};
//    for (int i = 0; i < 4; i++){
//        for (int j; j < 5 - i - 1; j++){
//            if( arr[j] > arr[j + 1]){
//                int temp = arr[j];
//                arr[j] = arr[ j + 1];
//                arr[j+1] = temp;
//
//            }
//        }
//    }
//    printf("\nThe sorted array");
//    for( int i=0; i<5; i++) {
//        printf("\n%d", arr[i]);
//    }
//}
                       // TÌM KIẾM TUYẾN TÍNH//
//#include <stdio.h>
////#include <conio.h>
//void main(){
//     int data[] = {5, 2, 9, 7, 6, 10};
//     int a = 10;
//     int i;
//     for( i = 0; i < 6; i++){
//         if(a == data[i])
//             break;
//     }
//     printf("Number %d found at position %d", a, i);
//     getch();
//}
#include <stdio.h>
#include <conio.h>
void main(){
    int data[] = {0, 11, 13, 14, 15, 17, 18};
    int low = 0;
    int high = 6;
    int searchValue = 18;
    int flag = 0;


    while(low<=high){
        int mid = (high + low)/2;
        if(searchValue == data[mid]){
            flag = 1;
            printf("Element found at index %d\n", mid);
            break;
        } else if(searchValue<data[mid]){
            high = mid - 1;
        } else if(searchValue>data[mid]){
            low = mid + 1;
        }
    }
    if(flag == 0){
        printf("Element not found in the array ");
    }
}
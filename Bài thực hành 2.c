//1. Tai cac thu vien stdio.h va math.h
#include <stdio.h>
#include <math.h>
//2. Tao ham main
int main(){
    //3. Khai bao va khoi tao number1 và number2
    int number1 = 11;
    int number2 = 4;
    //4. Tinh tong, hieu, tich, thuong, so du cua 2 so
    int sum = number1 + number2;
    int sub = number1 - number2;
    int mul = number1 * number2;
    //Thuong 2 so, thuong Lam tron Len, thuong Lam tron xuong
    int divide = number1/number2;
    int divide_ceil = ceil((double)number1/(double)number2);
    int divide_floor = floor((double)number1/(double)number2);
    //So du
    int surplus = number1 % number2;
    //5. Tang number1 Len 1, giam number2 xuong 1
    number1++;
    number2--;
    //6. number1 Luy thua number2
    int result = pow(number1, number2);
}

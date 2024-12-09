// Viet chuong trinh nhap vao tong 2 so bat ki  

#include<stdio.h>

int main(){
	int num1, num2, total;
	printf("Nhap vao so thu nhat : ");
	scanf("%d", &num1);
	
	printf("Nhap vao so thu hai : ");
	scanf("%d", &num2);
	
	total = num1 + num2;
	printf("%d + %d = %d", num1, num2, total); 
	
	return 0; 
} 



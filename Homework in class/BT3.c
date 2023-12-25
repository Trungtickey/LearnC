#include <stdio.h>
    int isPrime(int n){
    if (n < 2){
        return 0;
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}
  int main(){
    int n, m;
      printf("Nhap so dong n: ");
      scanf("%d", &n);
      printf("nhap so cot m: ");
      scanf("%d", &m);
      int a[n][m];
      printf("Nhap mang 2 chieu:\n ");
      for(int i = 0; i < n; i++){
          for (int j = 0; j < m; j++){
              printf("a[%d][%d] = ", i, j);
              scanf("%d", &a[i][j]);
          }
      }
      int maxPrimeCount = 0;
      int maxPrimeColumn = -1;
      for(int j = 0; j < m; j++){
          int primeCount = 0;
          for(int i = 0; i < n; i++){
              if(isPrime(a[i][j])){
                  primeCount++;
              }
          }
          if (primeCount > maxPrimeCount || (primeCount == maxPrimeCount && j > maxPrimeColumn)) {
              maxPrimeCount = primeCount;
              maxPrimeColumn = j;
          }
      }
}

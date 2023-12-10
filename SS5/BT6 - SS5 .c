#include <stdio.h>
  int main(){
    int ngay, thang;
    printf(" Nhap ngay sinh:");
    scanf("%d", &ngay);
    printf("Nhap thang sinh:");
    scanf("%d", &thang);
      if (thang == 12) {
          if (ngay < 22)
              printf("Nhan Ma");
          else
              printf("Ma Ket");
      } else if (thang == 1) {
          if (ngay < 20)
              printf("Ma Ket");
          else
              printf("Bao BInh");
      } else if (thang == 2) {
          if (ngay < 19)
              printf("Bao BInh");
          else
              printf("Song Ngu");
      } else if (thang == 3) {
          if (ngay < 21)
              printf("Song Ngu");
          else
              printf("Bach Duong");
      } else if (thang == 4) {
          if (ngay < 20)
              printf("Bach Duong");
          else
              printf("Kim NgUu");
      } else if (thang == 5) {
          if (ngay < 21)
              printf("Kim NgUu");
          else
              printf("Song Tu");
      } else if (thang == 6) {
          if (ngay < 21)
              printf("Song Tu");
          else
              printf("Cu GIai");
      } else if (thang == 7) {
          if (ngay < 23)
              printf("Cu GIai");
          else
              printf("Su Tu");
      } else if (thang == 8) {
          if (ngay < 23)
              printf("Su Tu");
          else
              printf("Xu Nu");
      } else if (thang == 9) {
          if (ngay < 23)
              printf("Xu Nu");
          else
              printf("THien BInh");
      } else if (thang == 10) {
          if (ngay < 23)
              printf("THien BInh");
          else
              printf("Bo Cap");
      } else if (thang == 11) {
          if (ngay < 22)
              printf("Bo Cap");
          else
              printf("Nhan Ma");
      }

      return 0;
}
#include<stdio.h>
int mainp(){
int soDao,n,soDoi,donVi;
printf("Nhap vao so n: ");
scanf("%d",&n);
soDoi = n;
soDao = 0;
while (soDoi>0) {
    donVi = soDoi % 10;
    soDao = soDao *10 + donVi;
    soDoi = soDoi / 10; }
   if (soDao == n) {
        printf("Doi Xung");
  } else {
   printf("Khong Doi Xung");}
    return 0;
}

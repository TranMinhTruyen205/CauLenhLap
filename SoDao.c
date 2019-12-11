#include<stdio.h>
int main4(){
int soDao,n,soGoc,donVi;
printf("Nhap vao so n: ");
scanf("%d",&n);
soGoc = n;
soDao = 0;
while (soGoc>0) {
    donVi = soGoc % 10;
    soDao = soDao *10 + donVi;
    soGoc = soGoc/ 10; }
        printf("%d",soDao);
  return 0;
}


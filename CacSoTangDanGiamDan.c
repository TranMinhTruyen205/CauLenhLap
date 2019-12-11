#include<stdio.h>
int mainq() {
int n,soTruoc,soSau;
printf("Nhap vao so n: ");
scanf("%d", &n);
do {
    soSau = soTruoc;
    n = n / 10;
    soTruoc = n % 10 ;
} while (n!=0 && soTruoc < soSau);
if (soTruoc < soSau){
    printf("Cac chu so tang dan");
}
else {
    printf("Cac chu so khong tang dan");
}

return 0;

}

#include<stdio.h>
int mainn() {
int i,n,soUoc;
soUoc = 0;
printf("Nhap vao so n: ");
scanf("%d",&n);
for (i=1; i<=n ; i++){
    if (n % i ==0){
        soUoc++;
    }
}if (soUoc == 2){
printf("%d la so nguyen to", n);}
else {
    printf("%d khong la so nguyen to",n);
}
return 0;
}

#include<stdio.h>
int maine() {
int n,i;
int sum = 0 ;
printf("Tinh S= 1 + 2*2 + 3*3 + 4*4+ ..... + n*n");
printf("\nNhap vao so n: ");
scanf("%d", &n);
for(i=0;i<=n;i++){
    sum += i*i;
}
printf("Tong S= %d", sum);







return 0;
}

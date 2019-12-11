#include<stdio.h>
int mainw() {
int n,i;
int sum = 0 ;
printf("Tinh S= 1 + 2 + 3 + 4 + ..... + n");
printf("\nNhap vao so n: ");
scanf("%d", &n);
for(i=0;i<=n;i++){
    sum += i;
}
printf("Tong S= %d", sum);







return 0;
}

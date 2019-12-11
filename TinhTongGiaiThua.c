#include<stdio.h>
int main2(){
int i,n,sum,giaiThua;
sum = 0;
giaiThua = 1;
printf("Tinh S= 1! + 2! .... + n! ");
printf("\nNhap so n: ");
scanf("%d", &n);
for (i = 1 ; i<=n ; i++){
      giaiThua *= i;
      sum += giaiThua;

} printf("S= %d",sum);






return 0;
}

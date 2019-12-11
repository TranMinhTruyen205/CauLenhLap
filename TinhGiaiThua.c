#include<stdio.h>
int main1(){
int i,n,sum;
sum = 1;
printf("Tinh S = 1 * 2 * 3 * .... * n = n!");
printf("\nNhap vao so n: ");
scanf("%d", &n);
for (i=1;i<=n;i++){

    sum *= i;
} printf("%d", sum);

return 0;
}

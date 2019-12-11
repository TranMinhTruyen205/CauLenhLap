#include<stdio.h>
int main3(){
int a,b,n,i;
int sum = 0;
do {
    printf("Nhap ba so nguyen a,b,n (a,b < n)");
    printf("\nNhap a: ");
    scanf("%d", &a);
    printf("\nNhap b: ");
    scanf("%d", &b);
    printf("\nNhap n: ");
    scanf("%d", &n);
} while (a > n || b > n);
for (i=0 ;i <= n-1 ;i++){
    if(i % a ==0 && i % b != 0) {
        sum += i;
    }
} printf("Ket qua = %d ", sum);





return 0;
}

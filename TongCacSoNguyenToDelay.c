#include<stdio.h>
int mainoff() {
int j,i,soUoc,n;
int sum = 0;
soUoc = 0;
do {
    printf("Nhap vao gia tri n (0<n<50): ");
    scanf("%d", &n);
} while (n<0 || n>50);
for (i=2; i <= n; i++) {
for (j=1; j<= i ;j++) {
        if (i%j==0)
            soUoc++;

} if (soUoc == 2)
sum += i;
}
printf("%d",sum);

return 0;
}

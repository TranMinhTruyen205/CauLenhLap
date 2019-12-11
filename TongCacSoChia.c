#include<stdio.h>
int maint(){
int i,n;
float sum = 0 ;
printf("Tinh S= 1 + 1/2 + .... + 1/n");
printf("\nNhap vao so n: ");
scanf("%d0", &n);
for(i=1;i<=n;i++){
    sum += 1.0/i;

}

printf("S= %.3f",sum);


return 0;
}

#include<stdio.h>
int main(){
int a,b;
int *c=&a;
int *d=&b;
printf("Enter the number a:");
scanf("%d",&*c);
printf("\nEnter the number b:");
scanf("%d",&*d);
printf("\nBefore swapping \n a:%d \n b:%d",*c,*d);
*c=*c+*d;
*d=*c-*d;
*c=*c-*d;
printf("\nAfter swapping \n a=%d \n b=%d",*c,*d);
return 0;
}
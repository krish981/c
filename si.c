#include<stdio.h>
void si(){
int p,r,t;
float total;
printf("Enter the amount of principle :");
scanf("%d",&p);
printf("Enter the rate of interest :");
scanf("%d",&r);
printf("Enter the amount of time period :");
scanf("%d",&t);
total=p*r*t/100;
printf("Total amount :%f",total);
}

float si1(){
float p,r,t;
float total;
printf("\nEnter the amount of principle :");
scanf("%f",&p);
printf("\nEnter the rate of interest :");
scanf("%f",&r);
printf("\nEnter the amount of time period :");
scanf("%f",&t);
total=p*r*t/100;
return total;
}

int main(){
si();
float total=si1();
printf("\nTotal amount :%f",total);

}
#include<stdio.h>
void triangle(){
int heigth,base;
float area;
printf("Enter the base :");
scanf("%d",&base);
printf("\nEnter the heigth :");
scanf("%d",&heigth);
area=heigth*base*0.5;
printf("\nArea of triangle :%f",area);
}

float triangle1(){
float base,heigth,area;
printf("\nEnter the base :");
scanf("%f",&base);
printf("\nEnter the heigth :");
scanf("%f",&heigth);
area=base*heigth*0.5;
return area;}

int main(){
triangle();
float area;
area=triangle1();
printf("\nArea of triangle :%f",area);


return 0;
}
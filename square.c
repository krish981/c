#include<stdio.h>

void square(){
int side,area;
printf("Enter the side of square :");
scanf("%d",&side);
area=side*side;
printf("\nArea of square :%d",area);
}

int square1(){
int side,area;
printf("\nEnter the side of square :");
scanf("%d",&side);
area=side*side;
return area;
}

int main(){
square();
int area;
area=square1();
printf("\nArea of square :%d",area);
return 0;
}
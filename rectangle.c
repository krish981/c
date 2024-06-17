#include<stdio.h>
void rectangle(){
int length,breath,area;
printf("Enter the length :");
scanf("%d",&length);
printf("\nEnter the breath :");
scanf("%d",&breath);
area=length*breath;
printf("\nArea of rectanglr :%d",area);
}

int rectangle1(){
int length,breath,area;
printf("\nEnter the length :");
scanf("%d",&length);
printf("\nEnter the breath :");
scanf("%d",&breath);
area=length*breath;
return area;
}

int main(){
rectangle();
int area;
area=rectangle1();
printf("\nArea of rectange :%d",area);


return 0;
}
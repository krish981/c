#include<stdio.h>
void circle(){
int radius;
float area;
printf("Enter the radius of circle :\n");
scanf("%d",&radius);
area=3.14*radius*radius;
printf("Area of Circle :%f\n",area);
}
float circle1(){
float radius;
float area;
printf("Enter the radius of circle :\n");
scanf("%f",&radius);
area=3.14*radius*radius;
return area;
}
int main(){

circle();

float area;
area=circle1();
printf("Area of Circle :%f",area);
return 0;
}
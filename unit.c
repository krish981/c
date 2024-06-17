#include<stdio.h>
int main ()
{ 
 int a;
 float total;
 printf("Enter the units :");
 scanf("%d",&a);
 if(a<=100){ 
 total=a*0.60+50;}
 else if(100<a && 200>=a){
 total=a*0.80+50;}
 else if (200<a && 300>=a)
 {
 total=a*0.90+50;
 
 }
 else{
 printf("unit are larger");}
 if(total>300){
 total =15*total/100+total;
 printf("total bill amount :%f",total);
 }
 else{
 printf("total bill amount :%f",total);
 }
 
 
 
 
 return 0;
 













}
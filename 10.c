#include<stdio.h>
int main ()
{ 
 int i,j,k=0;
 for(i=0;i<=5;i++){
 for(j=0;j<=i;j++){
 if(k%2==0){
 printf("1");
 }else{
 printf("0");
 }
 k++;
 }
 printf("\n");
 }
}
 
 return 0;
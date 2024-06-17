#include<stdio.h>
int main ()
{ 
 int a,i;
 printf("Enter the number :");
 scanf("%d",&a);
 
 for(i=0;i<=a;i++){
 	if(i%2==0){
		printf("\t%d",i*i);
	}else{
		
		printf("\t%d",i);
	}

 
 }
 
 
 
 
 
 return 0;
 













}
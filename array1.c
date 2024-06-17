#include<stdio.h>
int main ()
{ 
 int n;
 printf("Enter array length :");
 scanf("%d",&n);
 int number[n];
 for (int i=0;i<n;i++){
 printf("Enter the element of %d position :",i);
 scanf("%d",&number[i]);
 }
 for(int i=0;i<n;i++){
 printf("\t%d",number[i]);
 }
 
 
 
 return 0;
 













}
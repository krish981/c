#include<stdio.h>
int main ()
{ 
 
 char word;
 printf("Enter the word :");
 scanf("%c",&word);
 if(65<=word && 90>=word){
 printf("Lower case word :%c",word+32);
 }
 else{
 printf("Upper case word :%c",word-32);
 }
 
 
 return 0;
 













}
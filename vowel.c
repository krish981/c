#include<stdio.h>
int main()
{ 
char in;
printf("Enter the alphabet :");
scanf("%c",&in);
int upp=(in=='a'||in=='e'||in=='i'||in=='o'||in=='u');
int low=(in=='A'||in=='E'||in=='I'||in=='O'||in=='U');



if(upp||low)
{
printf("it is vowel");
}

else{
printf("it is consonant");
}
















return 0;
}
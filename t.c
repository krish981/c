#include<stdio.h>
int main()
{
int in;
int hr,min,sec;
printf("Enter the second :");
scanf("%d",&in);
hr=in/3600;
min=(in-hr*3600)/60;
sec=in-(hr*3600+min*60);
printf("\nTotal hour :%d",hr);
printf("\nTotal minute :%d",min);






printf("\ntime - %d:%d:%d",hr,min,sec);





















return 0;
}
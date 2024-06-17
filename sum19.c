#include<stdio.h>
int main()
{
int i,j;
char str1[50],str2[50],str3[100];

printf("string 1 :");
gets(str1);  
printf("string 2 :");
gets(str2); 
for(i=0;str1[i]!='\0';i++){
str3[i]=str1[i];
}
for(j=0;str2[j]!='\0';i++,j++){
str3[i]=str2[j];
}
str3[i]='\0';
printf("string 3 :%s",str3);

return 0;
}
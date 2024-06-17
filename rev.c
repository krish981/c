#include<stdio.h>
#include<string.h>
int main()
{int temp;
	int t=1;
char name[50];
gets(name);

for(int i=1;name[i]!='\0';i++){

t++;

}



for(int i=0;i<t/2;i++){

   temp = name[i];  
         name[i] = name[t - i - 1]; 
        name[t - i - 1] = temp;  
		
}
printf("%s",name);
return 0;
}
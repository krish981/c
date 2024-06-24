#include<stdio.h>
void reverse(){
    
    char number[50];
    int t=1;
    gets(number);
    for(int i=1;number[i]!='\0';i++){
    t++;
    }
   
    for(int i=0;number[i]!='\0';i++){
        printf("%c",number[t-i-1]);
    }
}
int main(){
    reverse();
    return 0;
}
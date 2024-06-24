#include<stdio.h>
void pattern(){
  
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
          printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
pattern();


return 0;
}

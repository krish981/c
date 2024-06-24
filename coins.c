#include<stdio.h>
int main(){
    int a=1,b=2,c=5,d=10,e=20,n;
    printf("Enter the amount :");
    scanf("%d",&n);
if(n>38){
     n-=e;
    printf("%d,",e);
     n-=d;
    printf("%d,",d);
     n-=c;
    printf("%d,",c);
     n-=b;
    printf("%d,",b);
     n-=a;
    printf("%d",a);   
    for(int i=1;i<=n;i++){
           
       
    }
}
else if(n=38){
    n-=e;
    printf("%d,",e);
     n-=d;
    printf("%d,",d);
     n-=c;
    printf("%d,",c);
     n-=b;
    printf("%d,",b);
     n-=a;
    printf("%d",a);   
}

return 0;
}
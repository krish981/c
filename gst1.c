#include<stdio.h>
struct bill{
int rate,qty,amt,tot,net;
int dis,gst;

};
int main(){
    struct bill cus[3];
    for(int i=1;i<=3;i++){
    
    printf("Customer %d\n",i);
    printf("Enter the price of item :");
    scanf("%d",&cus[i].rate);

    printf("Enter the quantity of item :");
    scanf("%d",&cus[i].qty);

    cus[i].amt=cus[i].rate*cus[i].qty;
    printf("Total Amount :%d\n",cus[i].amt);
  
    cus[i].dis=(cus[i].amt*5)/100;
    printf("Total discount :%d\n",cus[i].dis);

    cus[i].tot=cus[i].amt- cus[i].dis;
     printf("Total bill with discount :%d\n",cus[i].tot);

    cus[i].gst=(cus[i].tot*18)/100;
    printf("Net gst :%d\n",cus[i].gst);

    cus[i].net=cus[i].tot+ cus[i].gst;
    printf("Net Bill Payment :%d\n",cus[i].net);
    }

    return 0;
}
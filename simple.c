#include<stdio.h>
void si1(int p, int r,int t){
    float e=p*r*t/100;
    printf("%f\n",e);
}
float si(int p, int r,int t){
    float q;
    q= p*r*t/100;
    return q;
}
int main()
{
si1(9,9,30);
float total;
total=si(9,9,30);
printf("\nSimple interest :%f",total);
    return 0;
}
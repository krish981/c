#include<stdio.h>
#include<string.h>
struct result{
char name[100];
int Roll_No;
int maths,sci,sst,eng;
int total;
float per;
};
int main(){
for(int i=1;i<=3;i++){
    struct result stu[i];
    scanf("%s",&stu[i].name);
    stu[i].Roll_No=i;
    printf("Name :%s\n",stu[i].name);
    printf("Roll No :%d\n",stu[i].Roll_No);
    printf("Enter the marks of maths :");
    scanf("%d",&stu[i].maths);
     printf("Enter the marks of science :");
    scanf("%d",&stu[i].sci);
     printf("Enter the marks of sst :");
    scanf("%d",&stu[i].sst);
     printf("Enter the marks of english :");
    scanf("%d",&stu[i].eng);
    stu[i].total=stu[i].maths+stu[i].sci+stu[i].sst+stu[i].eng;
    printf("Total marks :%d\n",stu[i].total);
    stu[i].per=stu[i].total*100/400;
    printf("Total Percentage :%.2f\n",stu[i].per);
}
    return 0;
}
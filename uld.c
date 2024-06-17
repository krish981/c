#include<stdio.h>
int main()
{int t=0,p=0,q=0;
int first[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
        printf("Enter element of rows:%d column:%d   :",i,j);
		scanf("%d",&first[i][j]);
}
}
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(i==j){
		t=t+first[i][j];
		}
		else if(i>j){
		p=p+first[i][j];
		}
		else{
		
		q=q+first[i][j];
		}
	}
	
	printf("\n");
}
printf("\nsum of diagonal :%d",t);
	printf("\nsum of lower triangle :%d",p);
	
	printf("\nsum of upper triangle :%d",q);


















return 0;
}
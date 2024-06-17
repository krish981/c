#include<stdio.h>
int main()
{int t=0,p=0;
int first[3][3];
int second[3][3];

printf("Array 1");
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		
		printf("\nEnter element of rows:%d column:%d   :",i,j);
		scanf("%d",&first[i][j]);
		t=t+first[i][j];
	}
	
}
printf("\ntotal of Array 1 :%d",t);
printf("\nArray 2");
	for(int i=0;i<3;i++){
		
	for(int j=0;j<3;j++){
		printf("\nEnter element of rows:%d column:%d    :",i,j);
		scanf("%d",&second[i][j]);
		p=p+second[i][j];
	}
	
}
printf("\ntotal of Array 2 :%d",p);
printf("\nTotal of both array : %d",p+t);




















return 0;
}
#include<stdio.h>
int main()
{
int first[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
        printf("Enter element of rows:%d column:%d   :",i,j);
		scanf("%d",&first[i][j]);
		
}
}
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(first[i][j]==0){
		printf(" ");
		}else{
		printf("%d",first[i][j]);
		}
	}  
	printf("\n");
}




















return 0;
}
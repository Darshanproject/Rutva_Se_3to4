#include<stdio.h>
main(){
	int j,i,num[3][3];
for (i=0;i<3;i++){
	for(j=0;j<3;j++)
	{
		printf("Enter you numbers here [%d][%d]",i,j,num[i][j]);
		scanf("%d",&num[i][j]);
	}
}
for (i=0;i<3;i++){
	for(j=0;j<3;j++)
	{
		printf("%d",num[i][j]);

	}
	printf("\n");
}
}


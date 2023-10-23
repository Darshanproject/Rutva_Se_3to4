//Without with
#include<stdio.h>
main(){
int ans;
ans=sum();
printf("This is your answer %d",ans)	;
}
int sum(){
	int num,num1;
	printf("Enter your values here : ");
	scanf("%d",&num);
	printf("Enter your values here : ");
	scanf("%d",&num1);
	return num+num1;
}

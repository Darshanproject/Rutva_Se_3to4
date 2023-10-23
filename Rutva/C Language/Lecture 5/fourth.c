//Without with
#include<stdio.h>
main(){
int ans;
int num,num1;
	printf("Enter your values here : ");
	scanf("%d",&num);
	printf("Enter your values here : ");
	scanf("%d",&num1);
ans=sum(num,num1);
printf("This is your answer %d",ans);
}
int sum(int num,int num1){
	
	return num+num1;
}

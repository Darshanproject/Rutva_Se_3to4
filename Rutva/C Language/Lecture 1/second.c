/*
int  %d      25      
char    %c %s   name
double %lf   58.00
float	%f  58.000
*/
#include<stdio.h>
main(){
	int num=10;
	float num1=10.45;
	char name[1]="Abcdefjhijklmnopq";
	double num2=1111.55;
	
	printf("%d \n",num);
	printf("%s \n",name);
	printf("%.2f \n",num1);
	printf("%.2lf\n",num2);
}

/*
syntax:
if(condtion){
if(condtion){
statement;
}else{
false
}
}else{
false
}
*/


#include<stdio.h>
main()
{
	int marks;
	printf("Enter your marks here :");
	scanf("%d",&marks);
	if(marks > 0 && marks <100)
	{
			if(marks >=90 && marks <100)
	{
		printf("A Grade");
	}
	else if(marks >= 80 && marks <90){
		printf("B garde");
	}else if(marks  >= 70 && marks < 80){
		printf("C garde");
	}else if(marks >= 50 && marks < 70){
	printf("D gared");
	}else if(marks >= 35 && marks < 50){
		printf("Just pass");
	}else{
		printf("Fail");
	}
	}else{
		printf("Invalid input");
	}
}

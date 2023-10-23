#include<stdio.h>
#include<string.h>
main(){
	char name[20]="Badal",name2[20];
	printf("%d\n",strlen(name));
	strcpy(name2,name);
	printf("%s \n",name2);
	printf("%s \n",strcat(name,"Hello"));
//	printf("%s",strrev(name));
	printf("%s \n",strupr(name));
	printf("%s",strlwr(name));
		
}

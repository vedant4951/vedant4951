#include<stdio.h>
main()
{
	int a;
	printf("enter the marks:");
	scanf("%d",&a);
	if(a>0 || a<101){
		 
		 if (a>=80 && a<101){
		 	printf("your grade is A");
		 }
		 else if (a>=60 && a<80){
		 	printf("your grade is B");
		 	
		 }
	}
	else{
		printf("please enter valid marks");
	}
	
}

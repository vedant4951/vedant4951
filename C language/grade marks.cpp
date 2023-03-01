#include<stdio.h>
main()
{
	int m;
	printf("enter your marks:");
	scanf("%d",&m);
	if(m>=80 && m<=100){
		printf("your grade is A");
	}
	else if(m>=60 && m<80)
	{
		printf("your grade is b");
	}
	else if(m>=40 && m<60){
	
	printf("your grade is c");
	}
	else if(m<40 && m>=0){
	
	printf("you are failed");
	}
	else {
		printf("please enter marks betwen 0 to 100");
	}	
}

#include<stdio.h>
main()
{
	int b,a;
	printf("enter any number:");
	scanf("%d",&a);
	b=a%2;
	if (b==0){
		printf("entered number is even");
		
	}
	else{
		printf("entered number is odd");
	}
	
}

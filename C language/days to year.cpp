#include<stdio.h>;
main()
{    int a,b,c,d;
	printf("enter number of days:");
	scanf("%d",&a);
	b=a%365;
	c=a/365; 
	if (b==0){
		printf("number of years are %d ",c);
	}
	else {
		printf("number of years are %d and extra days %d",c,b );
	}
	
}

//simple intrest =p(1+RT)//
#include<stdio.h>
main()
{ int p,r,t,i,f;
	printf("enter the amount:");
	scanf("%d",&p);
	printf("enter the rate of intrest:");
	scanf("%d",&r);
	printf("enter the time in years: ");
	scanf("%d",&t);
	 	i=p*r*t;
	 	f=i/100;
	 	printf("simple intrest is :%d",f);
}

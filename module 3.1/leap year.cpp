#include<stdio.h>
main()
{
	int a,y;
	printf("enter the year:");
	scanf("%d",&y);
	a=y%4;
	if (a==0)
		{
			printf("enter year is leap year");
	}
	else if (y>9999 || y<999){
		printf("please enter a proper year");
	}
	else {
		printf("entered year is not leap year");
	}

	
}

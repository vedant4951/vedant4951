#include<stdio.h>
main(){
	int a,b,c,d,e,f,p;
	printf(" 1 adition \n 2 substraction \n 3 multiplication \n 4 divition \n ");
	printf("enter your choice:");
	scanf("%d",&p);
	printf(" enter value of a: ");
	scanf("%d",&a);
	printf(" enter value of b: ");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	if(p==1){
		printf("adition of a and b is :%d",c);
	}	else if(p==2){
		printf("substraction of a and b is: %d",d);
	}
	else if(p==3){
		printf("multiplication of a and b is :%d",e);
		
	}else if(p==4){
		printf("divitin of a and b is :%d",f);
	}
	else{
		printf("please select proper option");
	}
	
}

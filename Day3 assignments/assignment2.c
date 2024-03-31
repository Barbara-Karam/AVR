#include<stdio.h>
float ADD()
{
	float a,b;
	printf("enter the two numbers \n");
	scanf("%f \n %f",&a,&b);
	printf("%f + %f = %f",a,b,a+b);
	return a+b;
};
float SUB()
{
	float a,b;
	printf("enter the two numbers \n");
	scanf("%f \n %f",&a,&b);
	printf("%f - %f = %f",a,b,a-b);
	return a-b;
};
float MULTIPLY()
{
	float a,b;
	printf("enter the two numbers \n");
	scanf("%f \n %f",&a,&b);
	printf("%f x %f = %f",a,b,a*b);
	return a*b;
};
int main()
{
	short int i;
	printf("choose an operation \n 1-add \n 2- substraction \n 3-multiplication \n");
	scanf("%d",&i);
	switch(i)
	{
		case (1):{ADD();break;}
		case(2):{SUB();break;}
	    case(3):{MULTIPLY();break;}
		default:{printf("wrong number");break;}
	}
}
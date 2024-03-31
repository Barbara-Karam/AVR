#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k;
	printf("enter 10 numbers in succession \n");
	scanf("%d \n %d  \n  %d  \n %d  \n %d  \n %d  \n %d  \n %d \n  %d  \n %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	printf("enter the number you want to search \n");
	scanf("%d",&k);
		if (k==a) {printf("value found in case 1"); }
		else if(k==b) {printf("value found in case 2"); }
		else if(k==c) {printf("value found in case 3"); }
		else if(k==d) {printf("value found in case 4"); }
		else if(k==e) {printf("value found in case 5"); }
		else if(k==f) {printf("value found in case 6"); }
		else if(k==g) {printf("value found in case 7"); }
		else if(k==h) {printf("value found in case 8"); }
		else if(k==i) {printf("value found in case 9"); }
		else if(k==j) {printf("value found in case 10");}
		else          {printf("value doesn`t exist :(");}
	
}
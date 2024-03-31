#include<stdio.h>
int main()
{
	int ID,pass;
	printf("enter your ID \n");
	scanf("%d",&ID);
	switch(ID)
	{
		case(1234):{printf("please enter your password \n");scanf("%d",&pass);if(pass==0000) {printf("ahmad"); } else printf("incorrect pass")  ;break;}
		case(2345):{printf("please enter your password \n");scanf("%d",&pass);if(pass==0000) {printf("mohammed"); } else printf("incorrect pass")  ;break;}
		case(3456):{printf("please enter your password \n");scanf("%d",&pass);if(pass==0000) {printf("ali"); } else printf("incorrect pass")  ;break;}
		case(4567):{printf("please enter your password \n");scanf("%d",&pass);if(pass==0000) {printf("ezz"); } else printf("incorrect pass")  ;break;}
		case(5678):{printf("please enter your password \n");scanf("%d",&pass);if(pass==0000) {printf("camila"); } else printf("incorrect pass")  ;break;}
		case(6789):{printf("please enter your password \n");scanf("%d",&pass);if(pass==0000) {printf("zahra"); } else printf("incorrect pass")  ;break;}
		default:{printf("incorrect ID");}
	}
}
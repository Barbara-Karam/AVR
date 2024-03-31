#include<stdio.h>
void minmax(void)
{
unsigned int min=65535,max=0,n=0;
printf("enter numbers to find the max and min press 65535 to exit \n");
while (n!=65535)
{
	if (n>max) {max=n;}
	scanf("%d",&n);
	if(n<min) {min=n;}
	
}
printf("max = %d and min = %d \n and mean = %d \n",max,min,((min+max)/2));
}
int main()
{
	minmax();
}
#include <stdio.h>
void bubble(int *ptr)
{
	int temp,x,y;
	for(x=0;x<9;x++)
	{
		for( y=0;y<9-x;y++)
		{
			if(ptr[y]>ptr[y+1])
			{
				temp=ptr[y];
				ptr[y]=ptr[y+1];
				ptr[y+1]=temp;
			}
		}
	}
	printf("[ ");
	for(x=0;x<9;x++)
	{
		printf("%d  ,",ptr[x]);
	}
	printf(" ]");
};
int main()
{
	int array[10]={55,6,20,88,90,70,69,100,300,9};
	bubble(array);
}
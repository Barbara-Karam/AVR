#include<stdio.h>
int main()
{
	int x=0,y=1,z=2;
	int *ptr0=&x;
	int *ptr1=&y;
	int *ptr2=&z;
	int *temp;
	printf("x value = %d, y value = %d, z value = %d \n x address = %p , y address = %p ,z address = %p \n",x,y,z,ptr0,ptr1,ptr2);
	temp=ptr0;ptr0=ptr1;ptr1=ptr2;ptr2=temp;
	printf("x value = %d, y value = %d, z value = %d \n x address = %p , y address = %p ,z address = %p \n",x,y,z,ptr0,ptr1,ptr2);
}
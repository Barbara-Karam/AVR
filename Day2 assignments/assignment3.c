#include<stdio.h>
int main()
{
    float x,y,z;
    printf("enter three different numbers in succession \n");
    scanf("%f \n %f \n %f",&x,&y,&z);
    if (x>y&&x>z)
        printf("max num is %f \n",x);
    else if (y>z)
        printf("max num is %f \n",y);
    else
        printf("max num is %f \n",z);
}

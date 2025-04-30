#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter First Number :\t");
	scanf("%d",&num1);
	printf("\nEnter Second Number :\t");
	scanf("%d",&num2);
	printf("\nEnter Third Number :\t");
	scanf("%d",&num3);
	if(num1>=num2&&num1>=num3)
	{
		printf("\nFirst Number is Greater");
	}
	else if(num2>=num1&&num2>=num3)
	{
		printf("\nSecond Number is Greater");
	}
	else
	{
		printf("\nThird Number is Greater");
	}
	return 0;
}

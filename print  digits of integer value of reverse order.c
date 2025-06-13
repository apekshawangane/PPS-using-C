#include<stdio.h>
int main()
{
	int no,b;
	printf("Enter any number\n");
	scanf("%d",&no);
	printf("Reverse is given below\n");
	do
	{
		b=no%10;
		printf("%d",b);
		no=no/10;
	}
	while(no!=0);
    return 0 ;
}
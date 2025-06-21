#include<stdio.h>
int array(int arr[5])
{
	int sum=0;
	printf("Element is given below\n");
	 for(int i=0;i<=4;i++)
	 {
	 	printf("%d ",arr[i]);
	 	sum=sum+arr[i];
	 }
	 printf("\nTotal Sum=%d",sum);
}
int main()
{
	int b[5];
	printf("ENter 5 integer value one by one\n");
	for(int j=0;j<=4;j++)
	scanf("%d",&b[j]);
	array(b);
    return 0;
}


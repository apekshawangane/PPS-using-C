#include<stdio.h> 
int main()
{
   int array[50][50],row,col;
   int i,j;
   printf("Enter row \n");
   scanf("%d",&row);
   printf("Enter col \n");
   scanf("%d",&col);
   printf("Enter %d integer value one by one\n",row*col);
    for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	{
    		scanf("%d",&array[i][j]);
		}
	}
   
   printf("Elements of array is given below\n");
    for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	{
    		printf("%d ",array[i][j]);
		}
		printf("\n");
	}
    return 0 ;
}
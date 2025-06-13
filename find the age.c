#include<stdio.h>
enum age
{
	Rocky=21,
	Varsha=19,
	Afshana=18,
	Neeraj=23,
	Vandana=24,
	Jyoti=16
};
int main()
{
	enum age obj;
	obj=Vandana;
	/*age of vandana=24*/
	printf("The age of Vandana is %d",obj);
}
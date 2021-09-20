/*positive, negative or zero*/
#include<stdio.h>
void main()
{
	//Variable Declaration
	int number;
	printf("Enter any number\n");
	
	//Taking Input from user
	scanf("%d", &number);
	if(number>0)
	{
		printf("1");
	}
	else 
	{
		if(number==0)
	{
		printf("0");
	}
		else
	{
		printf("-1");
	}
	}
}

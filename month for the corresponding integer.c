/*Month for corresponding integer*/
#include<stdio.h>
void main()
{
	//Variable declaration
	int number;
	printf("Enter any number from 1 to 12\n");
	
	//taking input from the user
	scanf("%d", &number);
	
	//conditional statement and results
	if(number==1)
	{
		printf("January");
	}
	else 
	{
		if(number==2)
	{
		printf("February");
	}
		else if(number==3)
	{
		printf("March");
	}
	else if(number==4)
	{
	printf("April");
	}
	else if(number==5)
	{
	printf("May");
	}
	else if(number==6)
	{
		printf("June");
	}
	else if(number==7)
	{
		printf("July");
	}
	else if(number==8)
	{
		printf("August");
	}
	else if(number==9)
	{
		printf("September");
	}
	else if(number==10)
	{
		printf("October");
	}
	else if(number==11)
	{
		printf("November");
	}
	else if(number==12)
	{
		printf("December");
	}
	else
	{
		printf("Enter a number from 1 to 12");
	}
}
}

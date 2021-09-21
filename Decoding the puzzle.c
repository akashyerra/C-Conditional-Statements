/*Decoding the puzzle*/
#include<stdio.h>
void main()
{
	//Variable declaration
	int number1, number2, number3;
	
	
	scanf("%d%d%d", &number1, &number2, &number3);//Taking input from the user

	//Conditional statements and results
	if(number3==1)
	{
		printf("%d", number1+number2);
	}
	else if (number3==2)
	{
		printf("%d", number1-number2);
	}
	else if(number3==3)
	{
		printf("%d", number1*number2);
	}
	else if (number3==4)
	{
		printf("%.2lf", number1*1.0/number2);
	}
	else if (number3==5)
	{
		printf("%d", number1%number2);
	}
}

/*Profit and loss*/
#include<stdio.h>
void main()
{
	//Variable declaration
	int number1, number2;
	printf("Enter the cost price:\n");
	
	//Taking input from the user
	scanf("%d", &number1);
	
	printf("\nEnter the selling price:\n");
	scanf("%d", &number2);
	
	//Conditional statements and results
	if(number1>number2)
	{
		printf("Loss: %d", number1-number2);
	}
	else
	{
		printf("Profit: %d", number2-number1);
	}
}

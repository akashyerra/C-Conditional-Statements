/*Grades*/
#include<stdio.h>
void main()
{
	//Variable declaration
	char character;
	printf("Enter any grade(in upper case only)\n");
	
	//Taking input from the user
	scanf("%c", &character);
	
	//Conditional statements and results
	if (character=='E')
	{
		printf("Excellent");
	}
	else if (character=='V')
	{
		printf("Very Good");
	}
	else if (character=='G')
	{
		printf("Good");
	}
	else if (character=='A')
	{
		printf("Average");
	}
	else if (character=='F')
	{
		printf("Fail");
	}
	else
	{
		printf("Enter the grade in upper case only");
	}

		
}

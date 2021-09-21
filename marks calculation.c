/*Marks calculation eith division*/
#include<stdio.h>
void main()
{
	//Variable Declaration
	int roll_number, pm, cm, csm;
	double percentage;
	
	//Taking Inputs From The User
	printf("Enter your roll number\n");
	scanf("%d", &roll_number);
	printf("Enter your physics marks\n");
	scanf("%d", &pm);
	printf("Enter your chemistry marks\n");
	scanf("%d", &cm);
	printf("Enter your computer science marks\n");
	scanf("%d", &csm);
	
	//Calculation
	percentage= (pm+cm+csm)*1.0/300*100;
	
	//Result
	printf("\nRoll number: %d\n", roll_number);
	printf("Marks in Physics: %d\n", pm);
	printf("Marks in Chemistry: %d\n", cm);
	printf("Marks in Computer Science: %d\n", csm);
	printf("Total marks: %d\n", pm+cm+csm);
	printf("Percentage: %.2lf\n", percentage);
	

	//Condition and result
	if (percentage<=49)
	{
		printf("Division: Fail");
	}
	else if (percentage>=50 && percentage<=59)
	{
		printf("Division: Fourth");
	}
	else if (percentage>=60 && percentage<=69)
	{
		printf("Division: Third");
	}
	else if (percentage>=70 && percentage<=79)
	{
		printf("Division: Second");
	}
	else
	{
		printf("Division: First");
	}
	
}

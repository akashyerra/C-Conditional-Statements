/*Temperature*/
#include<stdio.h>
void main()
{
	//Variable declaration
	int temperature;
	printf("Enter any temperature in celcius degree\n");
	
	scanf("%d", &temperature);//Taking input from the user
	
	//Conditional statements and results
	if (temperature<0)
	{
		printf("Freezing Weather");
	}
	else if (temperature>=0 && temperature<=9)
	{
		printf("Very Cold Weather");
	}
	else if (temperature>=10 && temperature<=19)
	{
		printf("Cold Weather");
	}
	else if (temperature>=20 && temperature<=29)
	{
		printf("Normal Temperature");
	}
	else if (temperature>=30 && temperature<=39)
	{
		printf("It's Hot");
	}
	else
	{
		printf("It's very hot");
	}
}

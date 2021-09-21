/*greatest number*/
#include<stdio.h>
void main()
{
	//variable declaration
	int number1, number2;
	printf("Enter any two numbers\n");
	
	//taking inputs from user
	scanf("%d%d", &number1, &number2);
	
	//condition and result
	if(number1>number2)
	{
		printf("%d is biggest", number1);
	}
	else if(number1<number2)
	{
		printf("%d is biggest", number2);
	}
	else
	{
		printf("Both are equal");
	}
}

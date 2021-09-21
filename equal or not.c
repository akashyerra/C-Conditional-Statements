/*Equal or not equal*/
#include<stdio.h>
void main()
{
	int number1, number2;// Variable declaration
	printf("Enter any two numbers\n");
	scanf("%d%d", &number1, &number2);//taking inputs from user
	
	if(number1==number2)//condition
	{
		printf(" %d and %d are equal\n", number1, number2);// Result if condition is true
	}
	else
	{
		printf("%d and %d are not equal", number1, number2);// Result if cindition is false
	}
}

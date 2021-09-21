/*CURRENT BILL CALCULATION*/
#include<stdio.h>
void main()
{
	//Variable declaratioin
	int customer_id, units_consumed;
	double amount_charges, surcharge_amount;
	
	//Input by the user
	printf("Enter your customer id:\n");
	scanf("%d", &customer_id);
	printf("Enter units consumed:\n");
	scanf("%d", &units_consumed);
	
	//Calculation
	if (units_consumed<=199)
	{
		amount_charges =units_consumed*1.20;
	}
	else if (units_consumed>=200 && units_consumed<400)
	{
		amount_charges =units_consumed*1.50;
	}
	else if (units_consumed>=400 && units_consumed<600)
	{
		amount_charges =units_consumed*1.80;
	}
	else 
	{
		amount_charges =units_consumed*2.00;
	}
	
	if (amount_charges>400)
	{
		surcharge_amount = amount_charges*15/100;
	}
	else
	{
		surcharge_amount=0;
	}
	
	//Printing
	printf("\nCustomer ID: %d\n",customer_id);
	printf("Units Consumed: %d\n", units_consumed);
	printf("Amount Charges: %.2lf\n", amount_charges);
	printf("Surcharge Amount: %.2lf\n", surcharge_amount);
	printf("Net Amount To Be Paid By The Customer: %.2lf\n", amount_charges+surcharge_amount);
}

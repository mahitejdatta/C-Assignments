#include<stdio.h>
//Function prototypes
void float_binary(void *num);
void double_binary(void *num);
int main()
{
	char choice;
	do
	{
		float num;
		double num1;
		short option;
		//void pointer
		void *ptr;
		printf("Enter the option\n1.Float\n2.Double\n");
		scanf("%hd",&option);
		switch (option)
		{
		case 1://floating point number
			printf("Enter the floating point number\n");
			scanf("%f",&num);
			ptr=&num;
			printf("%1s %8s %1s","sign","Exponent","Mantissa\n");
			//function call
			float_binary(ptr);
			break;
		case 2://double number
			printf("Enter the floating point number\n");
			scanf("%lf",&num1);
			ptr=&num1;
			printf("%1s %-11s %1s","sign","Exponent","Mantissa\n");
			//function call
			double_binary(ptr);
			break;
		}
		printf("\nDo you wish to contine?(y/n)\n");
		scanf(" %c",&choice);
	}while(choice == 'y');
}

void float_binary(void *num)//pointer taken as void pointer
{ 
	//typecasting the float number as int to & and print the bits
	if(*(int *)num & (1<<(sizeof(float)*8-1)))
		printf("%-5s","1");
	else
		printf("%-5s","0");
	//mask generated to scan from 31st bit
	int mask=(1<<sizeof(float)*8-2);
	//loop to print the exponent bits
	for(int i=(sizeof(float)*8-1);i>=(sizeof(float)*8-8);i--)
	{
		//void pointer typecasted as integer
		if ((mask & *(int *) num))
			printf("1");
		else
			printf("0");
		mask=mask>>1;
	}
	printf(" ");
	//loop to print the 23 mantissa bits
	for(int i=(sizeof(float)*8-9);i>=sizeof(float)*8-31;i--)
	{
	//void pointer type casted as integer
		if ((mask & *(int *)num))
			printf("1");
		else
			printf("0");
		mask=mask>>1;
	}

}

void double_binary(void *num)//void pointer taken
{ 
	//generating the mask to get the bits of double number as it is 8 bytes
	unsigned long int mask=0x8000000000000000;
	//type casting as long it beacause its size is 8 bytes
	if(*(long int *)num &mask)
		printf("%-5s","1");
	else
		printf("%-5s","0");
		mask=mask>>1;
	
	for(int i=((sizeof(double)*8)-1);i>=((sizeof(double)*8)-11);i--)
	{
		//type casting as long it beacause its size is 8 bytes
		if ((mask & *(long int *) num))
			printf("1");
		else
			printf("0");
		mask=mask>>1;
	}
	printf(" ");
	for(int i=((sizeof(double)*8)-12);i>=((sizeof(double)*8)-63);i--)
	{
		if ((mask & *(long int *)num))
			printf("1");
		else
			printf("0");
		mask=mask>>1;

	}

}

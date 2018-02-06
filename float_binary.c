#include<stdio.h>
void float_binary(void *num);
int main()
{
	printf("Enter the option\n1.Float\n2.Double\n");
	scanf("%hd",&option);
	switch (option)
	{
	case 1:
		float num;
		short option;
		printf("Enter the floating point number\n");
		scanf("%f",&num);
		void *ptr=&num;
		printf("%1s %8s %1s","sign","Exponent","Mantissa\n");
		float_binary(ptr);
		break;
	case 2:
		double num;
		short option;
		printf("Enter the floating point number\n");
		scanf("%f",&num);
		void *ptr=&num;
		printf("%1s %11s %1s","sign","Exponent","Mantissa\n");
		double_binary(ptr);
		break;
	}
}

void float_binary(void *num)
{ 
	if(*(int *)num & (1<<(sizeof(float)*8-1)))
		printf("%-5s","1");
	else
		printf("%-5s","0");
	int mask=0x40000000;
	//printf("%x",mask);
	for(int i=31;i>=24;i--)
	{
		if ((mask & *(int *) num))
			printf("1");
		else
			printf("0");
		mask=mask>>1;
	}
	printf(" ");
	mask=0x00400000;
	for(int i=(sizeof(float)*8-9);i>=sizeof(float)*8-31;i--)
	{
		if ((mask & *(int *)num))
			printf("1");
		else
			printf("0");
		mask=mask>>1;

	}

}

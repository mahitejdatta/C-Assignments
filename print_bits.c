#include<stdio.h>
int main()
{
	
	char choice;
	do
	{
		int num1;
		printf("enter your number");				//scan user input
		scanf("%d",&num1);
		int num2=-num1,i;					//negative value of number entered
		printf("bits of entered number\n");
		for(i=0;i< (8 * sizeof(int));i++)					//print bits by masking
		{
			if(num1 & 0x80000000)	printf("1");
			else	printf("0");
			num1=num1 << 1;
		}
		printf("\nbits of negative value of number\n");				
		for(i=0;i<32;i++)                                       //print bits by masking
		{
			if(num2 & 0x80000000)
				printf("1");
			else
				printf("0");
			num2=num2<<1;
		}
		printf("\nDo you want to continue[y/n]:\n");
		scanf(" %c",&choice);
	}while(choice=='y');
}
	

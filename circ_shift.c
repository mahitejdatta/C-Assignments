#include<stdio.h>
void right_shift(int num,int bits);
void left_shift(int num,int bits);
void print_bits(int num)
{
	for(int i=0;i< (8 * sizeof(int));i++)					//print bits by masking
	{
		if(num & 0x80000000)	printf("1");
		else	printf("0");
		num=num << 1;
	}
}
int main()
{
	int num,option,bit;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the Option\n1.Left Shift\n2.Right Shift\n");
	scanf("%d",&option);
	
	switch (option)
	{
		case 1:
		    printf("Enter no.of bits to shift\n");
		    scanf("%d",&bit);
		    //function call
		    printf("Before Modification: ");print_bits(num);
		    left_shift(num,bit);
		    break;
		case 2:
		    printf("Enter no.of bits to shift\n");
		    scanf("%d",&bit);
		    //function call
		    printf("Before Modification: ");print_bits(num);
		    right_shift(num,bit);
		    break;
		default :
		    printf("Enter the Valid Option");
		    break;
	}
}

void left_shift(int num,int bits)
{
	for(int i=0;i<bits;i++)
	{
		if(num & 0x80000000)                     //checking whether the sign bit is 1
		{
			num=num<<1;			 // then left shift and or lsb with 1
			num=num | 1;
		}
		else
		{	
			num=num<<1;			//else just left shift
		}
	}
	printf("\nAfter Modification : " );print_bits(num);
	printf("Left Shifted value of num is %d\n",num);
}	

void right_shift(int num,int bits)
{
	for(int i=0;i<bits;i++)
	{
		if(num & 0x00000001)			//checking if lsb is 1
		{
			num=num>>1;			//then sign bit is made 1 by right shifting
			num=num | 0x80000000;		
		}
		else
		{	
			num=num>>1;			//else right shigting and anding with 0
			num=num & 0x7fffffff;
		}
	}
printf("\nAfter Modification : " );print_bits(num);
	printf("Right Shifted value of num is %d\n",num);
}	

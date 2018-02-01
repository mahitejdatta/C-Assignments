//Setting all the bits till lsb from the msb set bit
#include<stdio.h>

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
	int num,count=0,mask;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Before Modification: ");print_bits(num);
	mask=(1<<((sizeof(int)*8)-1));
	for(int i=0;i<(sizeof(int)*8);i++)				//loop to check which msb is set
	{
		if((num & mask) == mask) break;				//if the msb bit is set break
		else if((num & mask) == 0)				//else increment count and right shift
		{
			count++;						
			mask=mask>>1;
		}
	}
	mask=1;
	for(int i=0;i<((sizeof(int)*8)-count);i++)			//ORing till that bit from lsb
	{	
		num=num | mask;						
		mask=mask<<1;
	}
	printf("\nAfter Modification : " );print_bits(num);
	printf("\nLsb set no. is %d\n",num);
}
       

//Program to count number of zeros in a hexa decimal number

#include<stdio.h>
int main()
{
	//Taking mask as F to shift nibble wise
	int num,mask=0x0000000f,count=0;
	printf("Enter the hexadecimal number\n");
	scanf("%x",&num);
	for(int i=0;i<8;i++)
	{
		//Checks whether the nibble is zero
		if(num & mask)
		{
			mask=mask<<4;
		}
		//If nibble is zero increment count
		else 
		{
			count++;
			mask=mask<<4;
		}
	}
	printf("Num of zeros %d\n",count);
}




#include<stdio.h>
//Function to replace N bits at a pos from one number 
int replace_n_bits_pos(int num,int no_of_bits,int pos,int val,int bits)
{
	bits=bits<<(pos-no_of_bits);
	for(int i=0;i<no_of_bits;i++)
	{        	
		//If last bit of the val is one replace that one in the number according to pos
		if(val &0x00000001) num = num | (bits=bits<<1);
		//If last bit of the val is zero replace that zero in the number according to pos
		else 	num = num &(0xffffffff- (bits=bits<<1));
		val=val >> 1;
	}
	return num;	
}
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
	int num,start_pos,end_pos,no_of_bits,pos,val,bits=1;
	printf("Enter the no.\n");
	scanf("%d",&num);
	printf("Enter start position\n");
	scanf("%d",&start_pos);
	printf("Enter end position\n");
	scanf("%d",&end_pos);
	no_of_bits=(end_pos-start_pos+1);
	//printf("Enter the pos\n");
	//scanf(" %d",&pos);
	printf("Enter the value\n");
	scanf("%d",&val);
	printf("Before Modification: ");print_bits(num);
	printf("\nValue: ");print_bits(val);
	//Function call to replace the n bits according to the position
	num=replace_n_bits_pos(num,no_of_bits,end_pos,val,bits);
	printf("\nAfter Modification: ");print_bits(num);
	printf("\nResult is %d",num);
}

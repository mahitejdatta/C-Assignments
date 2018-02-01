//Program to implement the bitwise library functions//

#include<stdio.h>

//Function to get N bits from the number//
int get_n_bits(int num,int no_of_bits,int bits)
{
	//Looping statement to generate the mask
	for(int i=1;i<no_of_bits;i++)
		bits=bits | (bits<<1);
	//Anding the number with mask to get the value of no_of_bits
	return num & bits;
}

//Function to Replace N bits of one numberin another number//
int set_n_bits(int num, int val, int no_of_bits, int bits)
{
	//Looping statement to generate mask
	for(int i=0;i<no_of_bits;i++)
	{
		//If last bit of the val is one replace that one in the number according to pos
		if(val &0x00000001) num = num | bits; 
		//If last bit of the val is zero replace that zero in the number according to pos
		else	num = num & (0xffffffff- bits);
		val=val >> 1;
		bits=bits<<1;
	}
	return num;
}
//Function to Get the value of N bits in a given number//
int get_n_bits_pos(int num,int no_of_bits,int pos,int bits)
{
	//setting the mask according to the position
	bits= bits<<(pos+1);
	for(int i=0;i<no_of_bits;i++)	
		bits=bits | (bits>>1);
	//Returning the number that is obtained after anding and right shifting to get value of those many bits
	return ((num=bits&num) >> (pos - no_of_bits + 1));
}
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
//Function to toggle the n bits from pos in a number
int toggle(int num,int no_of_bits,int pos,int bits)
{
	bits=bits<<pos;
	for(int i=(pos-no_of_bits+1);i<pos;i++)
		bits=bits | (bits >> 1);
	return num^bits;
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

//Main function
int main()
{
	char choice;
	do
	{
		int num,option,no_of_bits,bits=1,val,pos;
		printf("Choose the Operation\n1.Get N Bits\n2.Replace N bits\n3.Get N bits Position\n4.Replace N nits from position\n5.Toggle bits\n");
		scanf("%d",&option);
		printf("Enter the no.\n");
		scanf("%d",&num);
		printf("Enter no. of bits to get the value\n");
		scanf("%d",&no_of_bits);
		switch (option)
		{
			case 1:
				printf("Before Modification: ");print_bits(num);
				//function call to get n bits by passing parameters
			    	num = get_n_bits( num, no_of_bits, bits );
				//function call to get n bits by passing parameters
				printf("\nAfter Modification: ");print_bits(num);
				printf("\nLast %d bits value is %d",no_of_bits,num);
			    	break;
			case 2:
				printf("Enter the value\n");
				scanf("%d",&val);
				printf("Before Modification: ");print_bits(num);
				printf("\nValue: ");print_bits(val);
				//Function call to replace n bits in a number
			    	num=set_n_bits( num, val, no_of_bits, bits );
				printf("\nAfter Modification: ");print_bits(num);
				printf("\nValue is %d\n",num);
			    	break;
			case 3:
				printf("Enter the pos\n");
				scanf("%d",&pos);
				printf("Before Modification: ");print_bits(num);
				//Function call to get the value of n bits from pos
			    	num=get_n_bits_pos(num,no_of_bits,pos,bits);
				printf("\nAfter Modification: ");print_bits(num);
				printf("\nValue is %d\n",num);
			    	break;
			case 4:
				printf("Enter the pos\n");
				scanf(" %d",&pos);
				printf("Enter the value\n");
				scanf("%d",&val);
				printf("Before Modification: ");print_bits(num);
				printf("\nValue: ");print_bits(val);
				//Function call to replace the n bits according to the position
			    	num=replace_n_bits_pos(num,no_of_bits,pos,val,bits);
				printf("\nAfter Modification: ");print_bits(num);
				printf("\nResult is %d",num);
				break;
			case 5:
				printf("Enter the pos\n");
				scanf("%d",&pos);
				printf("Before Modification: ");print_bits(num);
				num=toggle(num,no_of_bits,pos,bits);
				printf("\nAfter Modification: ");print_bits(num);
				printf("\n%d\n",num);	
				break;
			default:
				printf("Enter valid option\n");

		}
		printf("\nDo you wish to continue?[y/n]\n");
		scanf(" %c",&choice);
	}while(choice == 'y');
}

	


//int power(int a)
//{
//	int i,res=1;
//	for(i=1;i<=a;i++)
//	{
//		res=res*2;
//	}
//	return res;
//}

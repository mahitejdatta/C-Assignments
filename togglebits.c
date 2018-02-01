//Toggle the bits 
#include<stdio.h>

void toggle(int num);
int power(int a);
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	toggle(num);
}

void toggle(int num)
{
	int no_of_bits,pos,i,bits=0;
	printf("enter no. of bits\n");
	scanf("%d",&no_of_bits);
	printf("Enter the pos\n");
	scanf("%d",&pos);
	for(i=(pos-no_of_bits+1);i<=pos;i++)
	{
		bits=bits | power(i);
	}
	num=num^bits;
	printf("%d\n",num);	
}

int power(int a)
{
	int i,res=1;
	for(i=1;i<=a;i++)
	{
		res=res * 2;
	}
	return res;
}

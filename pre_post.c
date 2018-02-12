//Post and pre increment the given number without using increment operator and addition of number
#include<stdio.h>
//Function for pre increment
int pre_increment(int *ptr)
{
	int i ,mask=1,count=0,mask1=0xffffffff;
	//Checking if the number is even
	if((*ptr) % 2 == 0)
	{
		//If it is even just OR the lsb bit with one
		*ptr= (*ptr | 1);
		i= *ptr;
	}
	//Checking if the entered no is odd
	else if ((*ptr)%2 == 1)
	{
		for(int i=0;i<sizeof(int);i++)
		{
			//cheking from the lsb bits which bit is zero
			if((mask & *ptr) == mask)
				//if the bit is 1 making it as 0
				*ptr=(*ptr & (mask<<1));
			else
			{
				//if the any of the from lsb is 0 then make it as 1 and break the loop
				*ptr = *ptr | mask;
				break;
			}
			mask=mask<<1;
		}
		i=*ptr;
	}
	return i;
}
//Function for post increment
int post_increment(int *ptr)
{
	//Initializing the return value with the number itself
	int i=*ptr,mask=1,count=0,mask1=0xffffffff;
	if((*ptr) % 2 == 0)
	{
		*ptr= (*ptr | 1);
	}
	else if ((*ptr)%2 == 1)
	{
		for(int i=0;i<sizeof(int);i++)
		{
			if((mask & *ptr) == mask)
				*ptr=(*ptr & (mask<<1));
			else
			{
				*ptr = *ptr | mask;
				break;
			}
			mask=mask<<1;
		}
	}
	return i;
}

int main()
{
	char choice;
	do
	{
		int num,i,option;
		printf("Enter the Number\n");
		scanf("%d",&num);
		printf("1.Pre-increment\n2.post-increment\nenter the option\n");
		scanf("%d",&option);
		switch (option)
		{
			case 1:
				//Function call
				i=pre_increment(&num);
				printf("Num=%d\n",num);
				printf("pre incremented val=%d\n",i);
				break;
			case 2:
				//Function call
				i=post_increment(&num);
				printf("Num=%d\n",num);
				printf("Post incremented val=%d\n",i);
				break;
			default:
				printf("enter valid input\n");
		}
		printf("Do you wish to continue?(y/n)\n");
		scanf(" %c",&choice);
	}while(choice == 'y');
}

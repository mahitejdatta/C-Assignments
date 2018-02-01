#include<stdio.h>
int pre_increment(int *ptr)
{
	int i ,mask=1,count=0;
		int num=*ptr;

	if((*ptr)%2 == 0)
	{
		*ptr= (*ptr | 1);
		i= *ptr;
	}
	
	else if ((*ptr)%2 == 1)
	{
		for(int i=0;i<sizeof(int);i++)
		{
			if((mask & *ptr) == mask)
			{
				count++;
			}
			else if((mask & *ptr) == 0)
			{
				*ptr = *ptr | mask;
				break;
			}
			mask=mask<<1;
		}
		mask=0xfffffffe;
		for(int i=0;i<count;i++)
		{
			*ptr=*ptr&mask;
			mask=mask<<1;
		}
		i=*ptr
		//printf("%d\n",num);
	}


	return i;
}

int main()
{
	int num,i,option;
	printf("Enter the Number\n");
	scanf("%d",&num);
	printf("1.Pre-increment\n2.post-increment\nenter the option\n");
	scanf("%d",&option);
	switch (option)
	{
		case 1:
			pre_increment(&num);
			printf("Num=%d\n",num);
			printf("pre incremented val=%d\n",i);
	}
}

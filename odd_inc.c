#include<stdio.h>
int main()
{
	int num=7;
		num=num|8;
	int	mask=0xfffffffe;
	for(int i=0;i<3;i++)
	{
		num=num&mask;
		mask=mask<<1;
	}
	printf("%d\n",num);
}

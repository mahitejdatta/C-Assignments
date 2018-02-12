#include<stdio.h>
int main()
{
	printf("enter the no. of elements\n");
	short size,target;
	scanf("%hd",&size);
	float a[size],temp;
	printf("enter the elements\n");
	for(int i=0;i<size;i++)
		scanf("%f",&a[i]);
	for(int i=0;i<size;i++)
	{
		temp=a[i];
		target=i;
		for(int j=i+1;j<size;j++)
		{
			if((a[i]<a[j]) && temp1 != j)
			{
				temp=a[i];
				target=j;
			}
			else
			{

			}
		}
			printf("%.2f",temp);
	}
}

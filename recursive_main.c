#include<stdio.h>
int flag=0,i,store;
char choice;
int main()
{
	do
	{
	if(flag == 0)
	{
		store=1;
		printf("Enter the number\n");
		scanf("%d",&i);
		//Validating the number 
		if(i<0)
		{
			printf("Enter the positive no.\n");
			return 0;
		}
		flag=1;
	}
	//Looping till i is not equal to zero
	if ((i-1) !=0)
	{
		//multiplying to find the factorial
		store=store*i;
		i--;
		//recursive case
		return main();
	}
	printf("Factorial is %d\n",store);
	printf("Do you wish to continue?(y/n)\n");
	scanf(" %c",&choice);
	if(choice == 'y')
		flag=0;
	}while(choice == 'y');
}
		

#include<stdio.h>
int main()
{
	//variable initialized with the number whose factorial is need to find
	static int i=6;
	static int store=1;
	//Looping till i is not equal to zero
	while((i-1) !=0)	//base case
	{
		//multiplying to find the factorial
		store=store*i;
		i--;
		//recursive case
		return main();
	}
	printf("Factorial is %d\n",store);
}
		

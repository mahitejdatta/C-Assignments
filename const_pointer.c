#include<stdio.h>
int main()
{
	const int num=100;
	int *iptr = &num;
	*iptr = 200;
}

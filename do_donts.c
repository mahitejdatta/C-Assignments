#include<stdio.h>
int main()
{
	int a[5];
	int *p=&a[0];
	int *q=&a[4];
	int c=q-p;
	printf("%d",c);
}

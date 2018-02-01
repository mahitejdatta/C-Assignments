#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ptr;
	int i;
	ptr = malloc(5);
	for (i=0;i<5;i++)
	{
		ptr[i]='A'+i;
	}

	free(ptr);
	for (i=0;i<5;i++)
	{
		printf("%c",ptr[i]);
	}
}

#include<stdio.h>
#include<stdlib.h>
char * mystrdup(const char *s);
int main()
{
	char *ptr=mystrdup("helloguldukhanddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd");
	printf("%s",ptr);
	free(ptr);
}
char * mystrdup(const char *s)
{
	char *p=(char *)s;
	int count;
	while(*p++ != '\0')
		count++;
	if(p=malloc(1))
	{
		for(int i=0;i<count+1;i++)
		{
			*(p+i)=s[i];
		}
		return p;
	}
	else
		return NULL;
}

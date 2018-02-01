#include<stdio.h>                                                     //Header file
void main()
{
	unsigned char i=1;                                            
	printf("Oct Dec Hex Char\n");
	while(i<=127)                                                 //loops for 127 times
	{
		if(i<=32 || i == 127)                                 //checks it is a non printable character or not
		printf("%3o %3d %3x Non-printable char\n",i,i,i);
		else
		printf("%3o %3d %3x %3c\n",i,i,i,i);
		i++;
	}
}

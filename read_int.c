#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//function prototypes for power and converting to int function
int power(int i);
int conv_to_int(int num,int i);
int res;
int main()
{
	int i,y=0;
	char si[25];
	//reading a string from the user
	fgets(si,25,stdin);
	//condition to check whether entered no. is a negative number 
	if(si[0] == '-')
	{
		//loop to multiply the number according to the position
		for(i=0;i<strlen(si)-2;i++)
			//Function call to convert character to number
			y=y+conv_to_int(-(si[i+1]-48),strlen(si)-3-i);
	}
	//condition to check whether entered no. is a positive number 
	else if(si[0] == '+')
	{
		for(i=0;i<strlen(si)-2;i++)
			y=y+conv_to_int(si[i+1]-48,strlen(si)-3-i);
	}
	else
	{
		for(i=0;i<strlen(si)-1;i++)
			y=y+conv_to_int(si[i]-48,strlen(si)-2-i);
	}
	printf("Number is = %d\n",y);
}
//Function to covert each character in to a number
int conv_to_int(int num,int i)
{
	res=1;
	num =(num*(power(i)));
	return num;
}
//Function to multiply the number according to its power
int power(int i)
{
	if(i > 0)
	{ 
		res=res*10;
		i--;
		return power(i);
	}
	return res;
}               

	

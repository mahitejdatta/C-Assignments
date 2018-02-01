#include<stdio.h>
void isalphab(char num);		//Function Prototypes
void isdigits(char num);
void isspaces(char num);
void isxdigits(char num);					//
int main()
{
	char choice;
     do{
	char num;			
	int oper;
	printf("1.isalpha\n2.isdigit\n3.isspace\n4.isxdigit\n");
	printf("Enter the option\n");
	scanf("%d",&oper);			//Reads the option
	printf("Enter the number\n");
	getchar();
	scanf("%c",&num);			//Reads the character
	switch (oper)
	{
		case 1:
			isalphab(num);		//If option is 1 calls isalpha function
			break;
		case 2:
			isdigits(num);		//If option is 2 calls isdigit function
			break;
		case 3:
			isspaces(num);		//If option is 3 calls isspaces function
			break;
		case 4:
			isxdigits(num);		// If option is 4 calls isxdigit function
			break;
	}	
	printf("\nDo you wish to continue?[y/n]\n");
	scanf(" %c",&choice);
      }while(choice == 'y');
}
	
void isalphab(char num)				//Function to check entered charcter is alphabet
{
	if( num >= 'a' && num <= 'z' || num >= 'A' && num <= 'Z' )
	printf("Character is Alphabet\n");	
	else
	printf("Error:Character is not alpha\n");
}

void isdigits(char num)				//Function to check entered character is Digit
{
	if( num >= '0' && num <= '9')
	printf("Character is digit\n");
	else
	printf("Error:Character is not digit\n");
}

void isspaces(char num)				//Function to check entered character is space
{
	if(num == 32)
	printf("Character is Space\n");
	else
	printf("Error:Character is not space\n");
}

void isxdigits(char num)			//Function to check entered charcter is hexadecimal
{
	if( num >= '0' && num <= '9' || num >= 'A' && num <= 'F' )
	printf("Character is Hexadecimal\n");
	else
	printf("Error:Character is not Hexadecimal\n");
}


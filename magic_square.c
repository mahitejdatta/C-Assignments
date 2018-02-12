#include<stdio.h>
#include<stdlib.h>
//Function to get the magic square
void magic_square(int **ptr,int n)
{
	int row=0,col=n/2;
	//Loop to perform the magic square
	for(int i=0;i<n*n;i++)
	{
		//if row become negative make it as size - 1
		if(row<0)
			row=n-1;
		//if col exceeds size make it as 0;
		if(col>(n-1))
			col=0;
		//substitute the numbers from 0 to size-1;
		*(*(ptr+row)+col)=i+1;
		//taken temp row and col to check the next filling element
		int row_temp=row-1;
		int col_temp=col+1;
		if(row_temp<0)
			row_temp=n-1;
		if(col_temp>(n-1))
			col_temp=0;
		//if next filling element is zero
		if(*(*(ptr+row_temp)+col_temp)==0)
		{
			//decrement row and inc col
			row--;
			col++;
		}
		else 
		{
			//else just increment row
			row++;
		}
	}
}
int main()
{
	char choice;
	do
	{
		int n;
		printf("Enter the size of square\n");
		scanf("%d",&n);
		// if the six=ze is even then exit
		if(n%2 == 0)
		{
			printf("square size should be odd!!\n");
			return 0;
		}
		int *ptr[n];
		for(int i=0;i<n;i++)
			// callocing the array of pointers
			ptr[i]=calloc(n,sizeof(int));
		//Function call
		magic_square(ptr,n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				//Print with 2 reserved spaces
				printf("%2d ",ptr[i][j]);
			}
			printf("\n");
		}
		printf("Do you wish to contine?(y/n)\n");
		scanf(" %c",&choice);
	}while(choice == 'y');
}

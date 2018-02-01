#include<stdio.h>
int main()
{
	char choice;
	do{	
	int n,i,j,temp,res;                          //Initialization
	printf("Enter the array size\n");	    
	scanf("%d",&n);
	int array[n+1];                              // Array declaration
	printf("Enter the array Elements\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);		    // Loop for Storing each element in the array
	}

	for(i=0;i<n;i++)			    // Loop to shift all greater no.s  in ascending order
	{
		for(j=0;j<n-i;j++)		   // Loop to shift one greater no. in ascending order
		{
			if(array[j]>array[j+1])	   // Checks for sorting the elements in ascending order
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}

	if(n%2 == 1)				  // condition to check the array has odd no. of elements
	{
		res=n/2;
		printf("Median is %d\n",array[res]);  // Then middle no. is the median
	}
	else if (n%2 == 0)                       // If the array has even no. of elements
	{
		res=n/2;
		float res1=(array[res+1]+array[res])/(float)2;  // add middle 2 numbers and divide it by 2 to get median
		printf("Median is %f\n",res1);
	}
		printf("Do you wish to continue?[y/n]\n");
		scanf("	%c",&choice);
	}while(choice == 'y');
}

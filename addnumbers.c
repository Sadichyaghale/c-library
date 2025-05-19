#include<stdio.h>
int main()
{
	int firstnumber , secondnumber , result; //variable initialization
	printf("Enter first number:");
	printf("\n"); // /n helps yo break the line
	scanf("%d,&firstnumber");
	
	printf("Enter second number:");
	printf("\n"); // /n helps yo break the line
	scanf("%d,&secondnumber");
	printf("\n");
	
	//operation or equation
	
	result = firstnumber + secondnumber;
	
	//display
	printf("Addition =%d",result);
	
	return 0; //successfully close the program
	
	
}



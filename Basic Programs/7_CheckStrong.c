/*
	Check if the number is a Strong Number
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>
int findFactorial(int );

int main(){

	int number,lastDigit,orignialNumber,sum=0,factorial;

	printf("Enter a positive integer: ");
	scanf("%d",&number);

	orignialNumber = number;
	// A number is called strong if sum of factorial of digits
	// is equal to the original number.

	// check for strong
	while(number != 0){

		lastDigit = number % 10;

		factorial = findFactorial(lastDigit);

		sum = sum + factorial;

		number = number / 10;

	}

	if(sum == orignialNumber)
		printf("The number is Strong \n");
	else
		printf("It is not a Strong Number \n");

	
}

int findFactorial(int n){
	
	int i,factorial=1;

	for(i=1;i<=n;i++)
	{
		factorial = factorial * i;
	}
	
	return factorial;
}

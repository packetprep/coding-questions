/*
	Check if the Number is Armstrong
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>
#include<math.h>

int main(){

	int number,lastDigit,originalNumber,sum=0,power=0;

	printf("Enter a positive integer: ");
	scanf("%d",&number);

	// An Armstrong number of three digits is an integer such that the 
	//sum of the cubes of its digits is equal to the number itself. 
	//For example, 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371.

	//save a copy of given number
	originalNumber = number;

	//count the digits
	while(number!=0){
		number = number/10;
		power++;
	}

	// reassign number as number changed to 0
	number = originalNumber;
	
	//reverse the number
	while(number!=0){
		//get the last digit
		lastDigit = number % 10;

		sum = sum + pow(lastDigit,power);

		//remove the last digit
		number = number/10;
	}
	

	if(originalNumber == sum)
		printf("The given number is a Armstrong\n");
	else
		printf("The given number is not a Armstrong \n");

	

}






















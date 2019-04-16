/*
	Check if the Number is Palindrome
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int number,lastDigit,originalNumber,reverseNumber=0;

	printf("Enter a positive integer: ");
	scanf("%d",&number);

	originalNumber = number;

	// An integer is a palindrome if the reverse of that number is equal to the original number.
	
	//reverse the number
	while(number!=0){
		//get the last digit
		lastDigit = number % 10;

		reverseNumber = reverseNumber*10 + lastDigit;

		//remove the last digit
		number = number/10;
	}
	

	if(originalNumber == reverseNumber)
		printf("The given number is a Palindrome\n");
	else
		printf("The given number is not a Palindrome \n");

	

}






















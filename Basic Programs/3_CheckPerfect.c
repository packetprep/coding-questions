/*
	Check if the Number is Perfect
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int number,i,sum=0;

	printf("Enter a positive integer: ");
	scanf("%d",&number);

	//Perfect number, a positive integer that is equal to the sum of its proper divisors.
	
	//Check if it is Perfect
	for(i=1; i < number;i++){

			if(number%i==0)
			{
				sum = sum + i;
			}
	}

	if(sum == number)
		printf("The given number is a Perfect number\n");
	else
		printf("The given number is not a Perfect number \n");

	

}






















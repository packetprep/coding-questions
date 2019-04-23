/*
	Check if it is Leap Year
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int number;

	printf("Enter the year: ");
	scanf("%d",&number);

	if( ((number % 4 == 0) && (number % 100 != 0))
			|| (number % 400 ==0) )
	{
		printf(" %d is a Leap year\n",number);
	}else
		printf(" %d is not Leap year\n",number);

		
}








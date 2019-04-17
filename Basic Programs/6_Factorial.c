/*
	Find the factorial of a number
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>
int findFactorial(int );



int main(){

	int number,factorial;

	printf("Enter a positive integer: ");
	scanf("%d",&number);

	factorial = findFactorial(number);
	printf("The Factorial of the number %d is : %d \n",number, factorial);
	

}

int findFactorial(int n){
	
	int i,factorial=1;

	for(i=1;i<=n;i++)
	{
		factorial = factorial * i;
	}
	
	return factorial;
}























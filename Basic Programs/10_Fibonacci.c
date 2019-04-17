/*
	Program to print Fibonacci Series
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int number,i, first = 0 ,second = 1, third;

	printf("Enter the number of terms : ");
	scanf("%d",&number);

	// Fibonacci logic
	for(i =1; i<= number;i++){
		printf("%d \t",first);
		third = first + second;
		first = second;
		second = third;
	}

}







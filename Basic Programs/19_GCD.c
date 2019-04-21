/*
	Program to find GCD of two numbers without recursion
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int  a,b,i,gcd;

	printf("Enter the two numbers: ");
	scanf("%d %d",&a,&b);

	// GCD logic
	for(i=1;i<=a && i<=b;i++){
		if( a % i == 0 &&  b % i == 0){
			gcd = i;
		}
	}

	printf("The GCD of %d and %d is %d \n",a,b,gcd);

}







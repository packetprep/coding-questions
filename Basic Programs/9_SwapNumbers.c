/*
	Program to swap numbers
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>
void swap(int* , int*);

int main(){

	int a,b,temp;

	printf("Enter a first integer: ");
	scanf("%d",&a);

	printf("Enter a second integer: ");
	scanf("%d",&b);

	// 1. logic with three variables
	/*
		temp = a;
		a = b;
		b = temp; 
	*/

	// 2. With Swap function
	//swap(&a,&b);

	// 3. With two two varaibles
	/*
		a = a + b;
		b = a - b;
		a = a - b;
	*/

	// 4. With bitwise operator - XOR
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;

	printf("The numbers after swap are %d & %d \n",a,b);


}

void swap(int *a,int *b){
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
















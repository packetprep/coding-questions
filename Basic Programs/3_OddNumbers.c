/*
	Print Odd Numbers till N
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int n,i;

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		if(i%2!=0)
		printf("%d \t",i);
	}


}
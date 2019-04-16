/*
	Print Numbers (Natural/Even/Odd) till N
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int n,i,j,flag=0;

	printf("Enter a number: ");
	scanf("%d",&n);

	//Print Natural Numbers
	printf("\n\nPrinting Natural Numbers till N:\n");
	for(i=1;i<=n;i++){
		printf("%d \t",i);
	}

	//Print Even Numbers
	printf("\n\nPrinting Even Numbers till N:\n");
	for(i=1;i<=n;i++){
		if(i%2==0)
		printf("%d \t",i);
	}

	//Print Odd Numbers
	printf("\n\nPrinting Odd Numbers till N:\n");
	for(i=1;i<=n;i++){
		if(i%2!=0)
		printf("%d \t",i);
	}

	//Print Prime Numbers
	printf("\n\nPrinting Prime Numbers till N:\n");
	for(i=1;i<=n;i++){
		
		//check for factors

		for(j=2; j <=i/2;j++){
			if(i%j==0)
			{
				flag =1;
			}
		}

		if(i!=1 && flag!=1)
			printf("%d \t",i);

		//reset flag
		flag=0;

	}

}






















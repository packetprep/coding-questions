/*
	Program to print different patterns
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int i,j,k=1;
	// i is for rows & j is for columns

	printf("Pattern 1 - Wedge\n\n");
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d \t",1);
		}
		printf("\n");
	}

	printf("\n\nPattern 2 - Pyramid\n\n");
	for(i=10;i>0;i=i-2){
		//print tab spaces
		for(j=i;j>=0;j--){
			printf(" ");
		}

		for(j=k;j>0;j--){
			printf("%d ",1);
		}
		k+=2; // k=k+2;
		printf("\n");
	}

	k=1;
	printf("\n\nPattern 3 - Diamond\n\n");
	for(i=10;i>0;i=i-2){
		//print tab spaces
		for(j=i;j>=0;j--){
			printf(" ");
		}

		for(j=k;j>0;j--){
			printf("%d ",1);
		}
		k+=2; // k=k+2;
		printf("\n");
	}
	k=7;
	for(i=4;i<=10;i=i+2){
		//print tab spaces
		for(j=i;j>=0;j--){
			printf(" ");
		}

		for(j=k;j>0;j--){
			printf("%d ",1);
		}
		k-=2; // k=k-2;
		printf("\n");
	}

}







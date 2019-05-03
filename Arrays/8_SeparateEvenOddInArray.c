/*
	Program to Separate Even and Odd numbers in an array
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int arr[] = {3,4,7,9,2,6,8}; 
	int i=0,j=0,k=0;
	int even[10]={0},odd[10]={0};
	int n = sizeof(arr)/sizeof(int); 


	printf("Elements: \n");

	for(i=0;i < n ;i++){
		printf("%d ",arr[i]);
	}

	for(i=0;i < n ;i++){
		if(arr[i]%2==0){
			even[j]=arr[i];
			j++;
		}else{
			odd[k]=arr[i];
			k++;
		}
	}

	//Print Even numbers
	printf("\n\nEven numbers in the array are:\n");
	for(i=0;i<j;i++)
		printf("%d ",even[i]);

	//Print Odd numbers
	printf("\n\nOdd numbers in the array are:\n");
	for(i=0;i<k;i++)
		printf("%d ",odd[i]);

	
		
}











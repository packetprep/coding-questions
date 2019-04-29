/*
	Program to remove duplicate numbers from an array
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int arr[] = {100, 5, 201, 13, 5, -8,12,-8,3,-8}; 
	int i,j,k,key,exists;
	int arr_size = sizeof(arr)/sizeof(int); 
	int arr_2[100]={0};

	printf("Elements: \n");

	for(i=0;i<arr_size;i++){
		printf("%d\t",arr[i]);
	}

	//logic to remove duplicates
	for(i=0,j=0;i<arr_size;i++){

		key = arr[i];exists=0;
		for(k=0;k<i;k++){
			if(arr_2[k]==key)
			{
				exists = 1;
			}
		}
		if(!exists){
			arr_2[j] = arr[i];
			j++;
		}
		
	}

	printf("\n\nElements without duplicates: \n");
	for(i=0;i<j;i++){
		printf("%d\t",arr_2[i]);
	}
	
	
		
}








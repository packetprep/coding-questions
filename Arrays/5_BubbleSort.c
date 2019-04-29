/*
	Bubble Sort Program
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int arr[] = {100, 5, 201, 13, 5, -8,12,-8,3,-8}; 
	int i,j,temp;
	int arr_size = sizeof(arr)/sizeof(int); 


	printf("Elements: \n");

	for(i=0;i<arr_size;i++){
		printf("%d\n",arr[i]);
	}

	//logic to sorting
	for(i=0;i<arr_size;i++){
		for(j=i;j<arr_size;j++){
			if(arr[j]<arr[i]){
				//swap logic
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	printf("Sorted Elements: \n");

	for(i=0;i<arr_size;i++){
		printf("%d\n",arr[i]);
	}
		
		
}








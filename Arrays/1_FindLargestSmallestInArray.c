/*
	Program to find the largest and smallest element in an array
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>
#include<limits.h>

int main(){

	int arr[] = {100, 5, 201, 13, 4, -8,12,91,3,56}; 
	int largest,smallest,i;
	int arr_size = sizeof(arr)/sizeof(int); 

	printf("The elements of array are: \n");

	for(i=0;i<arr_size;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}

	// Logic for smallest and largest
	smallest = INT_MAX;
	largest = INT_MIN;
	for(i=0;i< arr_size;i++){
		if(smallest > arr[i])
			smallest = arr[i];
		if(largest < arr[i])
			largest = arr[i];
	}

	printf("The smallest element is %d\n",smallest);
	printf("The largest element is %d\n",largest );
		
}








/*
	Program to find the Second largest element in an array
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>
#include<limits.h>

int main(){

	//int arr[] = {100, 5, 201, 13, 4, -8,12,91,3,56}; 
	int arr[] = {20,20,20};
	int largest,second_largest,i;
	int arr_size = sizeof(arr)/sizeof(int); 

	printf("The elements of array are: \n");

	for(i=0;i<arr_size;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}

	// Logic for smallest and largest
	largest = second_largest = INT_MIN;
	for(i=0;i< arr_size;i++){
		if(largest < arr[i]){
			second_largest = largest;
			largest = arr[i];
		}else if( arr[i] < largest && arr[i] > second_largest)
		{
			second_largest = arr[i];
		}
	}

	if(second_largest == INT_MIN){
		printf("The largest element is %d and there is no second largest number\n",largest);
	}else{
		printf("The largest element is %d and second largest number is %d\n",largest,second_largest);
		
	}
	
		
}








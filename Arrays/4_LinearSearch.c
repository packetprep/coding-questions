/*
	Linear Search Program
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	int arr[] = {100, 5, 201, 13, 5, -8,12,-8,3,-8}; 
	int i,key,position = -1;
	int arr_size = sizeof(arr)/sizeof(int); 


	printf("Elements: \n");

	for(i=0;i<arr_size;i++){
		printf("%d\n",arr[i]);
	}

	printf("Enter the element to be searched: ");
	scanf("%d",&key);

	//logic to find the position
	for(i=0;i<arr_size;i++){
		if(key == arr[i])
		{
			position = i;
			break;
		}
	}

	if(position!=-1)
		printf("The element %d is at position %d \n",key, position);
	else
		printf("The element %d not found \n",key);		
		
}








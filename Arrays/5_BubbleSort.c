/*
	Bubble Sort Program
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>
void swap(int*,int*);
void BubbleSort(int *,int);
int main(){

	int arr[] = {100, 5, 201, 13, 5, -8,12,-8,3,-8}; 
	int i;
	int n = sizeof(arr)/sizeof(int); 


	printf("Elements: \n");

	for(i=0;i < n ;i++){
		printf("%d\n",arr[i]);
	}

	//logic to sorting
	BubbleSort(arr,n);

	printf("Sorted Elements: \n");

	for(i=0;i <n ;i++){
		printf("%d\n",arr[i]);
	}
		
		
}

void BubbleSort(int arr[],int n){
	int i, j; 
   for (i = 0; i < n-1; i++)        
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 

}

void swap(int *a, int *b){
	int temp;

	temp = *a;
	*a =  *b;
	*b = temp;
}








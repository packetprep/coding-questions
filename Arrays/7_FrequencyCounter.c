/*
	Frequency Counter of numbers of an array
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>
void Frequency(int *, int );
int main(){

	int arr[] = {3,4,3,8,4,4,4,5,4}; 
	int i,max;
	int n = sizeof(arr)/sizeof(int); 


	printf("Elements: \n");

	for(i=0;i < n ;i++){
		printf("%d ",arr[i]);
	}

	Frequency(arr,n);
	
		
}

void Frequency(int arr[],int n){
	
	int arr_2[100]={0},freq[100]={0};
	int i,j,k,exists;
	for(i=0; i<n;i++){
		exists=0;
		for(k=0;k<i;k++){
			if(arr_2[k]==arr[i])
			{
				exists = 1;
				freq[k]++;
			}
		}
		if(!exists){
			arr_2[j] = arr[i];
			freq[j]++;
			j++;
		}
	}

	printf("\n\nElements with Frequency: \n");
	for(i=0;i<j;i++){
		printf("Element:%d, F:%d\n",arr_2[i],freq[i]);
	}

}










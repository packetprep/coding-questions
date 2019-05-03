/*
	Largest Sum Contiguous Subarray - Kadane's Algorithm
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>
int MaxSubArraySum(int *, int );
int main(){

	int arr[] = {-1,7,-6,14,20,-50,30}; 
	int i,max;
	int n = sizeof(arr)/sizeof(int); 


	printf("Elements: \n");

	for(i=0;i < n ;i++){
		printf("%d ",arr[i]);
	}

	max = MaxSubArraySum(arr,n);

	printf("\n\nThe maximum Subarray sum is %d\n",max);
	
		
}

int MaxSubArraySum(int arr[],int n){
	int i, max_current,max_global;
	max_current = max_global = 0;
   for (i = 0; i < n; i++){
   		//printf("c:%d g:%d a:%d\n",max_current,max_global,arr[i]);
   		if(arr[i] < (max_current +arr[i]))
   			max_current = max_current + arr[i];
   		else
   			max_current = arr[i];
   		if(max_current > max_global)
   			max_global = max_current;
   		//printf("c:%d g:%d  --After Updation\n",max_current,max_global);
   		//printf("\n\n");
   }

   return max_global;

}










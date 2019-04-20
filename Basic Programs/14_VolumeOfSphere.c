/*
	Find the volume of a Sphere
	Author 			: 		Krishna Teja G S
	Repository		:		github.com/packetprep/coding-questions
	Website			: 		packetprep.com
*/

#include<stdio.h>

int main(){

	double radius,volume;

	printf("Enter the Radius of the sphere: ");
	scanf("%lf",&radius);

	volume = (4.0/3) * (22.0/7) * radius * radius * radius; 


	printf("Volume of the Sphere is %.2lf\n",volume);
	
}








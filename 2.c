//Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user
#include<stdio.h>
int main()
{	int arr[10],i;
	float ave=0;
	printf("Enter value in an array: ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		ave+=arr[i];
	}
	printf("average of all array elements is %0.2f",ave/10);
return 0;
}

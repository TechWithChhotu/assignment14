/* Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
*/
#include<stdio.h>
int main()
{
	int ar[10],sum_even=0,sum_odd=0,i;
	printf("Enter 10 array elements: ");
	for(i=0;i<10;i++){
		scanf("%d",&ar[i]);
		
		if(ar[i]%2)
		sum_odd+=ar[i];
		else
		sum_even+=ar[i];
	}
	
	printf("Entr sum of all even number in an array: %d",sum_even);
	printf("\nEntr sum of all odd number in an array: %d",sum_odd);
return 0;
}


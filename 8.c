 //Write a program to find the second smallest number in an array.Take array valuesfrom the user
#include<stdio.h>

int main()
{
    int arr[10],j,i,temp;

    printf("Enter array elements: ");
    for(i=0; i<10; i++)
        scanf("%d",&arr[i]);

    for(i=0; i<10; i++) {
        for(j=i+1; j<10; j++) {
            if(arr[j]<arr[i]) {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("second smallest = %d",arr[1]);
    return 0;
}

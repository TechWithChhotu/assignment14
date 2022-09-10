// Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>

int main()
{
    int arr[10],i,copy[10];

    printf("Enter array elements: ");
    for(i=0; i<10; i++)
        scanf("%d",&arr[i]);


    for(i=0; i<10; i++)
        copy[i]=arr[i];

    printf("after copy array elements: ");
    for(i=0; i<10; i++)
        printf(" %d",copy[i]);
    return 0;
}

// Write a program to find the smallest number stored in an array of size 10. Take array values from the user
#include<stdio.h>

int main()
{
    int arr[10],s,i;

    printf("Enter array elements: ");
    for(i=0; i<10; i++)
        scanf("%d",&arr[i]);

    s=arr[0];
    for(i=0; i<10; i++) {
        if(s>arr[i])
            s=arr[i];
    }
    printf("smallest is %d",s);
    return 0;
}

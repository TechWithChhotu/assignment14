//Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int arr[10],g,i;

    printf("Enter array elements: ");
    for(i=0; i<10; i++)
        scanf("%d",&arr[i]);

    g=arr[0];
    for(i=0; i<10; i++) {
        if(g<arr[i])
            g=arr[i];
    }
    printf("grater=%d",g);
    return 0;
}

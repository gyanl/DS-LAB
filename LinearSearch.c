/* Write a program to implement
linear search in an array */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,x, flip=0, arr[10];
    for(i=0;i<10;i++)
      {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
      }

    printf("Array : ");

    for(i=0;i<10;i++)
      {
        printf("%d ",arr[i]);
      }
    printf("\nSearch for : ");
    scanf("%d",&x);

    for(i=0;i<10;i++)
      {
        if(arr[i]==x)
        {
            printf("\nElement found at position %d.",i+1);
            flip++;
        }
      }
if(!flip) printf("\nElement not found.");
}

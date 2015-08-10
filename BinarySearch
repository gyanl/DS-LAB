/* Write a program to implement
binary search in an array */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,x,hi,lo,mid,flip=0, arr[10];
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

    hi=10;
    lo=0;

    while(!flip)
        {
        mid = (hi+lo)/2;
        if(arr[mid]==x)
            {
                printf("Element found at position %d",mid+1);
                flip++;
            }
        else if(x>arr[mid]) {lo=mid+1;}
        else {hi=mid-1;}
        }
}

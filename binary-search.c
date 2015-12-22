#include<stdio.h>

int main()
{
int arr[10];
int i, n,beg,end,found=0,num;

printf("Enter number of elements : ");
scanf("%d",&n);
printf("Enter %d elements : ",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Enter element to search for : ");
scanf("%d",&num);

beg=0;end=n;
while(!found)
{
if(arr[(beg+end)/2]==num) found=(beg+end)/2;
else if (arr[(beg+end)/2]>num) end=(beg+end)/2;
else beg=(beg+end)/2;
}
printf("Element found at position : %d",found+1);
return 0;
}

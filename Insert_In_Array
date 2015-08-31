#include<stdio.h>
#include<conio.h>

void main()
{
int i, swap, temp, num, arr[6];
arr[5]=0;
clrscr();
printf("Enter 5 numbers : ");
for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }

for(i=0;i<5;i++)
  {
    printf("\nPosition %d = %d.",i+1,arr[i]);
  }

printf("\n\nInsert number : ");
scanf("%d",&num);
printf("At position : ");
scanf("%d",&temp);
printf("\nNew array : ");
for(i=0;i<6;i++)
  {
    if(i==temp-1)
      {
	swap=arr[i];
	arr[i]=num;
      }
    if(i>=temp)
      {
	arr[i]= arr[i] + swap;
	swap= arr[i] - swap;
	arr[i]= arr[i] - swap;
      }
  }

for(i=0;i<6;i++)
  {
    printf("\nPosition %d = %d.",i+1,arr[i]);
  }
getch();
}

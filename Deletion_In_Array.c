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

printf("\n\nDelete element at position : ");
scanf("%d",&temp);
printf("\nNew array : ");
for(i=0;i<6;i++)
  {
    if(i>=temp)
      {
	arr[i]=arr[i+1];
	arr[i+1]=0;
      }
  }

for(i=0;i<4;i++)
  {
    printf("\nPosition %d = %d.",i+1,arr[i]);
  }
getch();
}

#include<stdio.h>

int main(){
  int x[20],size,i,j,temp;

  printf("Enter size of the array: ");
  scanf("%d",&size);

  printf("Enter %d elements: ",size);
  for(i=0;i<size;i++)
    scanf("%d",&x[i]);

  for(i=1;i<size;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(x[j]>x[j+1])
			{
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
	}

  printf("Sorted elements: ");
  for(i=0;i<size;i++)
    printf(" %d",x[i]);

  return 0;
}

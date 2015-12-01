#include <stdio.h>

int main()
{
	int x[6];
	int i,j,temp;
	
	for(i=0;i<6;i++)
		scanf("%d",&x[i]);
	
	for(int i=0;i<6;i++)
		for(int j=0;j<6-i;j++)
			if(x[j]>x[j+1])
				{
					temp=x[j];
					x[j]=x[j+1];
					x[j+1]=temp;
				}
	
	for(i=0;i<6;i++)
		printf("%d ",x[i]);
	
	return 0;
}

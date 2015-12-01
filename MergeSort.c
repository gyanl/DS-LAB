#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{
int i=0,j=0,k=l;
	int n1 = m-l+1;
	int n2 = r-m;

	int L[n1], R[n2];

	for(i=0;i<n1;i++)
	{
		L[i]=arr[l+i];
	}

	for(i=0;i<n2;i++)
	{
		R[i]=arr[m+1+i];
	}

i=0;j=0;
	while(i<n1 && j<n2)
	{
		if (L[i] < R[j])
		{
			arr[k] = L[i];
			i++;
		}

		else
		{
			arr[k] = R[j];
			j++;
		}

	k++;
	}

	while (i < n1)
	{
			arr[k] = L[i];
			i++;
			k++;
	}

	while (j < n2)
	{
			arr[k] = R[j];
			j++;
			k++;
	}

}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
	int x[10];
	int i,j,temp,n;

printf("Enter number of elements : ");
scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&x[i]);

mergeSort(x,0,n-1);

	for(i=0;i<n;i++)
		printf("%d ",x[i]);

	return 0;
}

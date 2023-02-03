//Implementation of Merge Sort

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int a[MAX],n;
void mrg_sort(int low,int high);
void merge(int low,int mid,int high);

void mrg_sort(int low,int high)
{

	if(low < high)
	{
		int mid = (low + high)/2;
		mrg_sort(low,mid);
		mrg_sort(mid+1,high);
		merge(low,mid,high);
	}

}
/*
//This function is also working
void merge(int low,int mid,int high)
{
        int k=0;
        int i=low;
        int j = mid+1;
        int*l3;
        l3 = (int*)malloc(sizeof(high - low +1));
        while(i <= mid && j<= high)
        {
                if(a[i] < a[j])
                        l3[k++] = a[i++];
                else
                        l3[k++] = a[j++];
        }
        while(i <= mid)
        {
                l3[k++] = a[i++];
        }
        while(j <= high)
        {
                l3[k++] = a[j++];
        }
	while( k > low)
		a[high--] = l3[--k];
        free(l3);
}
*/
 //This Function is  working
void merge(int low,int mid,int high)
{
	int index = low, k = 0;
	int i=low;
	int j = mid+1;
	int*l3;
	l3 = (int*)malloc(sizeof(high - low +1));
	while(i <= mid && j <= high)
	{
		if(a[i] < a[j])
			l3[index++] = a[i++];
		else
			l3[index++] = a[j++];
	}
	while(i<= mid)
	{
		l3[index++] = a[i++];
	}
	while(j <= high)
	{
		l3[index++] = a[j++];
	}
	for(k = low;k<index;k++)
		a[k] = l3[k];
	free(l3);
}

int main()
{
        int i;
        printf("Enter size:");
        scanf("%d",&n);

        printf("Enter elements of array:\n");
        for(i=0;i<n;i++)
        {
                printf("A[%d]= ", i);
                scanf("%d", a+i);
        }

         printf("\nelements of array you Entered:\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t", a[i]);
        }

	mrg_sort(0,n-1);
	printf("\nMerge sorted array :\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t", a[i]);
        }


	return 0;
}


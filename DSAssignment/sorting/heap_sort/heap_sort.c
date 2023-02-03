//Implementation of Heap Sort

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int a[MAX],n;
void swap(int*a,int*b);
void heapfy(int i,int size);

void swap(int*a,int*b)
{
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
}

void heap_sort()
{
	int i;
	for(i = (n/2)-1; i >= 0; i--)
		heapfy(i,n-1);
	for(i = n-1;i >= 1;i--)
	{
		swap(&a[0],&a[i]);
		heapfy(0,i-1);
	}
}

void heapfy(int i,int size)
{
	int temp,c;

	for(temp = a[i];2*i+1 < size;i = c)
	{
		c=2*i+1;
		if(2*i+2 < size && a[2*i+2] > a[c])
			c++;
		else if(a[c] > temp)
			a[i] = a[c];
		else
			break;
	}
	a[i] = temp;
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

	heap_sort();
	printf("\nHeap sorted array :\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t", a[i]);
        }
	return 0;
}



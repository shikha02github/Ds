// Implementation of Insertion sort.

#include<stdio.h>
#define max 100

int a[max],n;
void swap(int*a,int*b);

void swap(int*a,int*b)
{
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
}


void qck_sort(int low,int high)
{
	int pivot = a[low];
	int i = low + 1;
	int j = high;

	if(low < high)
	{
		while(1)
		{
			while(a[j] > pivot)
			{
				j--;
			}

			while( i <= high && a[i] < pivot)
			{
				i++;
			}
			if(i < j)
			{
				swap(&a[i],&a[j]);
			}
		
			else
				break;
		}
		swap(&a[low],&a[j]);
		qck_sort(low,j-1);
		qck_sort(j+1,high);
	}
}

int main()
{
	int i,j;
        printf("Enter the array size:");
        scanf("%d", &n);

        printf("Enter the array elements :\n");
	
        for(i=0;i<n;i++)
        {

                printf("A[%d]= ", i);
                scanf("%d",a+i);
        }


        printf("\nThe array you entered is :\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t", a[i]);
        }

        qck_sort(0 , n-1);
        printf("\nThe Quick sorted array is :\n");
         for(i=0;i<n;i++)
         {

                  printf("%d\t", a[i]);
         }
        return 0;
}




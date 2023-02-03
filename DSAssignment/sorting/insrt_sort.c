// Implementation of Insertion sort.

#include<stdio.h>
#define max 100

int a[max],i,n,j;

void insrt_sort()
{
	int temp;
	for(i=1;i<n;i++)
	{
		j = i-1;
		temp =  a[i];
		while(j>=0 && a[j] > temp)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
}

int main()
{
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

	 insrt_sort();
	 printf("\nThe Insertion sorted array is :\n");
         for(i=0;i<n;i++)
         {

                  printf("%d\t", a[i]);
         }
        return 0;
}


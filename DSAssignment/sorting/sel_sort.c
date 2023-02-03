// Implementation of Selection sort.

#include<stdio.h>
#define max 100

int a[max],i,n,j;
void swap(int*a,int*b);

void swap(int*a,int*b)
{
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
}
void sel_sort()
{
	for(i=0;i<n-1;i++)
	{
		int loc;
		loc = i;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j] < a[loc])
				loc = j;
		}
		if(loc != i)
			swap(&a[i],&a[loc]);
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
		
		sel_sort();
		printf("\nThe Selection sorted array is :\n");
	    for(i=0;i<n;i++)
    	  {

        	  printf("%d\t", a[i]);
     	 }
        return 0;
}


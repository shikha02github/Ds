//Implementation of Boubble sort.

#include<stdio.h>
#define max 100

int a[max],i,n,j;
void swap(int*a,int*b);
void bubble_sort()
{
	for(i=0;i<n-1;i++)
	{
		int flag = 0;
		for(j=0;j<=n-2-i;j++)
		{
			if(a[j] > a[j+1])
			{
				swap(&a[j],&a[j+1]);
				flag = 1;
			}
		}
		if(flag == 0)
			break;
	}
}
void swap(int*a,int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
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

	bubble_sort();
	printf("\nThe Bubble sorted array is :\n");
    for(i=0;i<n;i++)
      {
  
          printf("%d\t", a[i]);
      }
	return 0;
}

	


	

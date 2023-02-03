#include<stdio.h>
#include<stdlib.h>
void quicksort(int number[],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;

		while(i<j)
		{
			while(number[i]<=number[pivot]&&i<last)
				i++;
 			while(number[j]>number[pivot])
				j--;
			if(i<j)
			{
	  			temp=number[i];
	  			number[i]=number[j];
	  			number[j]=temp;
        		}


			temp=number[pivot];
			number[pivot]=number[j];
			number[j]=temp;
			quicksort(number,first,j-1);
			quicksort(number,j+1,last);
                  }

	  }
}


int main()
{
		int i,count,number[5];
		printf("how many elements are u going to enter:");
		scanf("%d",&count);
		printf("enter %d element: ",count);
		for(i=0;i<count;i++)
			scanf("%d",&number[i]);
		quicksort(number,0,count-1);
 		printf("order of sorted element: ");
		for(i=0;i<count;i++)
			printf("%d\n",number[i]);
		return 0;
}
 



#include<stdio.h>
int main()
{
 int a[10],n,i,j,temp;
 printf("enter array size:");
 scanf("%d",&n);
 //reading element

 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
  
//printf(array before sorting
printf("\nbefore sorting\t");
for(i=0;i<n;i++)
 printf("%d\t",a[i]);

//logic bubble sort
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-1;j++)
   {
	if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
    }
}
//after sorting
printf("\n after sorting\t");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}



#include<stdio.h>
int main()
{
 int i,j,n,temp,size,min,a[10];
 printf("enter the size");
 scanf("%d",&size);

 //reading element to a array
 printf("enter the element into a array\n");
 for(i=0;i<size;i++)
 {
 scanf("%d",&a[i]);
 }
 //print array before sort
 for(i=0;i<n;i++)
	 printf("\n%d\t",a[i]);
 printf("before sorting\n");
 for(i=0;i<size;i++)
 {
  printf("\n%d\t",a[i]);
 }


 //logic selection
 for(i=0;i<size;i++)
 {
	 min=i;
 for(j=i+1;j<size;j++)
 {
  if(a[j]<a[min])
	  min=j;
 }

 temp=a[i];
 a[i]=a[min];
 a[min]=temp;
 }

 //after sorting
 for(i=0;i<n;i++)
	 printf("\n%d\t",a[i]);
 printf("after sorting\n");
 for(i=0;i<size;i++)
  printf("\n%d",a[i]);
 
}

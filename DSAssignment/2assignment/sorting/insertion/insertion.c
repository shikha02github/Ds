#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,a[10],temp,n;
//size array
printf("enter the array size:\n");
scanf("%d",&n);
//reading element into array
printf("enter the element into a array\n");
for(i=0;i<size;i++)
scanf("%d",&size);

// print array element before sorting
printf("enter value before sorting");
for(i=0;i<n;i++)
printf("%d\t",a[i]);


//logic 
for(i=0;i<=n;i++)
{
temp=a[i];
}
for(j=1;j>0 && temp<a[j-1]:j--)
{
a[j]=a[j-1];
}
a[j]=temp;
}
//print element after sorting
printf("\nafter sorting\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return ;
}

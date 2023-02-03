Quicksort(int low,int high)
{
pivot=a[low];
i=low+1;
j=high;
if(low<high)
{
while(1)
{
	while(a[j]>pivot)
	j--;
while(i<high && a[i]<pivot)
	i++;
if(i<j)
	swap(&a[i],&a[j]);
else
	break;
}
swap(&a[low],&a[j]);
Quicksort(low,j-1);
Quicksort(j+1,high);
}
}

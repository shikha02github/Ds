#include<stdio.h>
int main()
{
int low,high, mid,n,a[50],key,i;
printf("enter the no  of element");
scanf("%d",&n);
printf("enter %d integer:",n);
for(i=0;i<n;i++)
          scanf("%d",&a[i]);
printf("eneter value to be find");
scanf("%d",&key);
  	low=0;
  	high=n-1;
  	mid=(low+high)/2;
while(low<=high)
  {
          if(a[mid]<key)                  
             low=mid+1;
          else if(a[mid]==key)
          {
                  printf("%d element found at index %d\n",key,mid+1);
                  break;
          }
          else
                  high=mid-1;
                  mid=(low+high)/2;
  }
  if(low>high)
          printf("element not found %d in list",key);
  return 0;
  }
                  

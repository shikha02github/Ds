#include<stdio.h>
int main()
{
int a[50],search,i,num;
printf("enter element into an array");
scanf("%d",&num);

printf("enter integer",num);
for(i=0;i<num;i++)
	scanf("%d",&a[i]);
printf("enter no to be search:");
scanf("%d",&search);

for(i=0;i<num;i++)
{
	if(a[i]==search)
	{
		printf("%d is present %d\n",search);
		break;
	}
}

if(i==num)
	printf("not found",search);
return 0;
}

#include<stdio.h>
#include<stdlib.h>
void enque(int);
int deque(void);
int underflow(void);
int overflow(void);
void display(void);
struct queue
{
	int size;
	int front,rear;
	int q[];
}que;

void main()
{
  int i;	
  que.size;
  que.front=-1;
  que.rear=-1;
  printf("\nenter the size of array:");
  scanf("%d",&que.size);
  que.q[que.size];

for(i=0;i<que.size;i++)
{
  int j,i;
  printf("enter the number of array:");
  scanf("%d",&j);
  enque(j);
}

for(i=0;i<que.size;i++)
{
   deque();
}
display();
}

int underflow(void)
{
  if(que.front==-1 && que.rear==-1)
	  return 1;
     return 0;
}

int overflow(void)
{
  if(que.rear==que.size-1)
          return 1;
      return 0;
} 
 
void enque(int ele)
{
   if(!overflow())
   {
      if(que.front==-1 && que.rear==-1)
      que.front++;
      que.rear++;
      que.q[que.rear]=ele;
   }
   else
   printf("\nqueue is full");
}

int deque()
{
	int x=-1;
	if(!underflow())
	{
	x=que.q[que.front];
        if(que.front==que.rear)
	{
	que.front=que.rear==-1;
	}
	
	else
	{
	que.front++;
         return x;
        }
        }
        else
	{
        printf("\nqueue is empty");
        }  
        printf("\n the deque element is :%d",x);

	return x;
}
void display(void)
{
	int i;
	if(!underflow())
	{
	for(i=que.front;i<=que.rear;i++)
	{
	printf("element is %d\n",que.q[i]);
	}
	}
	else
        {
	printf("\n the queue is empty");
        }
        
}


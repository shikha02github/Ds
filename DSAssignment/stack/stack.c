#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size; 
    int tos;
    int s[];
}sta;
//struct stack stk;
int Isempty()
{
     if(sta.tos==-1)
        return 1;
     return 0;
}
int Isfull()
{
      if(sta.tos==sta.size-1)
          return 1;	      
      return 0;
}  
int length()
{
	return sta.tos+1;
}	
void display()
{int i=0;
     if(!Isempty())
     {
        for( ;i<=sta.tos;i++)
        {
           printf("element %d is %d",i,sta.s[i]);
        }
     }   
     else
	printf("stack Is empty\n");

}	
void push(int element)
{
     if(!Isfull())
     {
           sta.tos++;
           sta.s[sta.tos]=element;
           //sta.s[++sta.tos]=element;
	   printf("Pushed element:%d\n",sta.s[sta.tos]);
     }
     else
           printf("stack is full");   
}
int pop()
{int x =-1;
	if(!Isempty())
        {
            x=sta.s[sta.tos];
            sta.tos--;
        }
        else
        
           printf("stack is empty");
       
        return x;
}
int peek()
{int x =-1;
	if(!Isempty())
        {
	     x=sta.s[sta.tos];
        }
        else
             printf("stack is empty");
        return x;
}
int main()
{
	sta.size;
	sta.tos=-1;
	printf("enter the no of elements");
	scanf("%d",&sta.size);
	sta.s[sta.size];
	printf("enter the %d element of array:",sta.size);
	int i;
	for(i=0;i<sta.size;i++)
	{	int j;
        
		scanf("%d",&j);
        
		push(j);

	}
        printf("top element is %d\n",peek());
        printf("stack size is %d\n",length());
        for(i=0;i<=sta.size;i++)
        {
        printf("popped element is %d\n",pop());
        }
return 0; 
}

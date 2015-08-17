#include<stdio.h>
#include<conio.h>
#include<process.h>

void push(int n);
void pop();
void peek();

int stack[3],top=-1,max=3;

void main()
{
  int i=0, ele;
  clrscr();
  while(1)
  {
    printf("\nPush 1 to push. Push 2 to pop. Push 3 to peek. Push 4 to exit.\n");
    printf("Enter choice : ");
    scanf("%d",&i);
     if(i==1)
      {
	printf("Enter element to push : ");
	scanf("%d",&ele);
	push(ele);
      }
     else if(i==2)
      {
	pop();
      }
     else if(i==3)
      {
	peek();
      }
     else if(i==4)
      {
	exit(0);
      }
     else printf("Invalid choice. Try again.\n");
  }
}

void push(int n)
{
  if(top==max-1) printf("Stack overflow.\n");
  else {
	 top++;
	 stack[top]=n;
	 printf("Pushed %d.\n",n);
       }
}

void pop()
{
  if(top==-1) printf("Stack empty.\n");
  else {
	 printf("Popped %d.\n",stack[top]);
	 top--;
       }
}

void peek()
{
  if(top==-1) printf("Stack empty.\n");
  else {
	 printf("Top element is %d.\n",stack[top]);
       }
}

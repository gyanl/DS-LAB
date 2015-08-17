#include<stdio.h>
#include<conio.h>

void push(char n);
void pop();
void post(char c);

int ptop=-1,top=-1,max=10;
char STACK[100],IN[100],POST[100];
void main()
{
  int i;
  printf("INFIX : ");
  scanf("%s",&IN);

  for(i=0;i<100;i++)
    {
      if((IN[i]>65)&&(IN[i]<91))
	post(i);
      else if((i=='*'||i=='+'||i=='-'||i=='/'))
      {
       push(IN[i]);
      }
      else if(i==')')
      {
	pop();
      }
    }
  printf("%s",POST);
  getch();
}

void push(char n)
{
  if(top==max-1) printf("Stack overflow.\n");
  else {
	 top++;
	 STACK[top]=n;
       }
}

void pop()
{
  if(top==-1) printf("Stack empty.\n");
  else {
	 ptop++;
	 POST[ptop]=STACK[top];
	 top--;
       }
}

void post(char c)
{
   ptop++;
   POST[ptop]=c;
}

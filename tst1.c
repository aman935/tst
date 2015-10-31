//This file is to make a program that will show how values will be entered and
//the stack will be implemented. 
#include<stdio.h>

void display(char **ar,int m,int n)         //To display the grid, all at once.
{
  int i=0,j=0;
  while(i<m)
    {
      j=0;                           
      while(j<n)
	{
	  printf("%d |",ar[i][j]);
	  j++;
	}
      printf("__________");
      i++;
    }
  j=0;
  while(j<i)
    printf("%d  ",j);
}

void instr()          //To display the instructions to the user
{
  printf("In tick stack toe, you can enter values into the visible grid\n only by pushing values in the stack. You will be required to\n enter the number of grid coloumn in which you want to enter the cross or zero.");
}

int main()
{
  char ch='y';
  int n=5,m=5;
  printf("Do you want to play? (y/n)");
  scanf("%c",&ch);
  if(ch=='y'||ch=='Y')
    {
      printf("\nEnter the number of rows and coloumns of the stack(both can be max 5)");
      scanf("%d%d",&m,&n);
      if(m<6&&n<6)
	{
	  display();
	}
    }
}

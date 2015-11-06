//This file is to make a program that will show how values will be entered and
//the stack will be implemented. 
#include<stdio.h>

void display(char ar[5][7])         //To display the grid, all at once.
{
  int i=0,j=0;
  while(i<5)
    {
      j=0;                           
      while(j<7)
	{
	  printf("%c|",ar[i][j]);
	  j++;
	}
      printf("\n_______________\n");
      i++;
    }
  j=0;
  while(j<7)
    printf("%d  ",++j);
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
      display(ar[5][7]);
      if(!checkwin(ar[5][7]))
	{
	  while(!checkwin(ar[5][7]))
	    
	}
    }
    
}

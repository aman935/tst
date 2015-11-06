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

int main()
{
  char ar[5][7]={{' ',' ',' ',' ',' ',' ',' '},
		 {' ',' ',' ',' ',' ',' ',' '},
		 {' ',' ',' ',' ',' ',' ',' '},
		 {' ',' ',' ',' ',' ',' ',' '},
		 {' ',' ',' ',' ',' ',' ',' '},
                  };
  int i=0,j=0;
  /* while(i<5) */
  /*   { */
  /*     j=0;                            */
  /*     while(j<7) */
  /* 	{ */
  /* 	  scanf("%c",&ar[i][j]); */
  /* 	  j++; */
  /* 	} */
  /*     i++; */
  /*   } */
  display(ar);
  return 0;
}

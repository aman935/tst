#include<stdio.h>
int checkwin(char game[5][7]);
int enter(char a[5][7],int p,int *ct);
void display(char ar[5][7]);
void init(char ar[5][7],int *ct);

void change_col(int p)
{
  (p==1)?printf("\033[22;34m"):printf("\033[22;32m");
}

void gotoxy(int x,int y)
 {
 printf("%c[%d;%df",0x1B,y,x);
 }            

void logo()
{
  gotoxy(25,3);
  printf("#####    #    ###");
  gotoxy(25,4);
  printf("  #     #   # ");
  gotoxy(25,5);
  printf("  #     #    ###");
}
int main()
{
  int p1=0,p2=0,t=1,state=2,p=1,ct[7],k=0;
  char a[5][7],ch='Y';
  do
    {
      init(a,ct);
      p=1;
      while(checkwin(a)==2)
	{
	  printf("\ec");
	  change_col(p);
	  display(a);
	  logo();
	  k=enter(a,p,ct);
	  if(k)
	  p=(p==1)?2:1;              //Changes p to let both the players play
	}
      switch(checkwin(a))
	{
	case 1:p1++;
	  break;
	case 0:p2++;
	  break;
	case 3:p1++;
	       p2++;
	  break;
	default:p1++;
	  break;
	}
      do
	{
	  printf("\ec");
	  display(a);
	  logo();
	  gotoxy(28,8);
	  printf("----------------Scores----------------");
	  gotoxy(28,9);
	  printf("P1:  %d    P2:   %d    ",p1,p2);      
	  gotoxy(28,10);
	  printf("Play one more game?(y/n)");
	  scanf("%c",&ch);
	}while(!(ch=='Y'||ch=='y'||ch=='1'||ch=='N'||ch=='n'||ch=='0'));
	
      if(ch=='N'||ch=='n'||ch=='0')
	printf("\ec");
    }while(ch=='Y'||ch=='y'||ch=='1');
  return 0;
}
//Functions : checkwin,display,enter,init
//Checkwin
//Enter- takes argument ct(coloumn tag array),player number,2d array
//init takes argument array
int checkwin(char game[5][7])      
{                                  //x wins:1, o wins:0, draw:3, continue:2
    int check,count,drcount=0;
    char t;
    int i,j;
    for(i=0;i<5;i++)
    {
      t=game[i][0];
      count=0;
      for(j=0;j<7;j++)
        {   
	  if((game[i][j]=='x')||(game[i][j]=='o'))
            drcount++;
	  if(game[i][j]==t)
            {   //printf("%c\n",t);
	      count=count+1;  //printf("%d\n",count);
	      if(count==4)
                {
		  if(t=='x')
                    return 1;
		  if(t=='o')
                    return 0;
                }
            }
	  else
	    {
	      t=game[i][j];      //printf("%c\n",t);
	      count=1;     //printf("%d\n",count);
            }
        }
    }           //printf("*");
    for(i=0;i<7;i++)
    {
      t=game[0][i];
      count=0;
      for(j=0;j<5;j++)
        {
	  if(game[j][i]==t)
            {
	      count+=1;
	      //printf("%d\n",count);
	      if(count==4)
                {
		  if(t=='x')
                    return 1;
		  if(t=='o')
                    return 0;
                }
            }
            else
	      {
                t=game[j][i];
                count=1;      //printf("%d\n",count);
	      }
        }
    }
    int k,l;
    //printf("*");
    i=0;
    for(j=0;j<6;j++)
    {
        count=0;
        t=game[i][j];
        k=i;
        l=j;
        while((k<5)&&(l<7))
        {
            if(t==game[k][l])
            {   //printf("%c\n",t);
                count+=1;
                //printf("%d\n",count);
                if(count==4)
                {
                    if(game[k][l]=='x')
                    return 1;
                    if(game[k][l]=='o')
                    return 0;


                }
            }
            else
            {
                t=game[k][l];
                //printf("%c\n",t);
                count=1;
                //printf("%d\n",count);
            }
            k++;
            l++;
        }
    }//printf("*");
    j=0;
    for(i=1;i<4;i++)
    {
        count=0;
        t=game[i][j];

        k=i;
        l=j;
        while((k<5)&&(l<7))
        {
            if(t==game[k][l])
            {   //printf("%c\n",t);
                count+=1;
                //printf("%d\n",count);
                if(count==4)
                {
                    if(game[k][l]=='x')
                    return 1;
                    if(game[k][l]=='o')
                    return 0;


                }
            }
            else
            {
                t=game[k][l];
                //printf("%c\n",t);
                count=1;
                //printf("%d\n",count);
            }
            k++;
            l++;
        }
    }//printf("*");
    i=0;
    for(j=1;j<=6;j++)
    {
        count=0;
        t=game[i][j];
        k=i;
        l=j;

        while((k<5)&&(l>=0))
        {
            if(t==game[k][l])
            {   //printf("%c\n",t);
                count+=1;
                //printf("%d\n",count);
                if(count==4)
                {
                    if(t=='x')
                    return 1;
                    if(t=='o')
                    return 0;

                }
            }
            else
            {
                t=game[k][l];
                //printf("%c\n",t);
                count=1;
                //printf("%d\n",count);
            }
            k++;
            l--;

        }
    }//printf("*");
    j=6;
    for(i=1;i<4;i++)
    {
        count=0;
        t=game[i][j];
        k=i;
        l=j;
        while((k<5)&&(l>=0))
        {
            if(t==game[k][l])
            {//printf("%c\n",t);
                count+=1;
                //printf("%d\n",count);
                if(count==4)
                {
                    if(t=='x')
                    return 1;
                     if(t=='o')
                    return 0;
                }
            }
            else
            {
	      t=game[k][l];
	      //printf("%c\n",t);
	      count=1;
	      //printf("%d\n",count);
            }
            k++;
            l--;
        }
    }
    if(drcount==35)
    return 3;
    else
    return 2;
}


int enter(char a[5][7],int p,int *ct)  //c->coloumn of the stack, ct->coloumn tag,
{                                       //the position till which array is empty
  char ch;
  int c=0;
  if(p==1)
    ch='x';
  else
    ch='o';
  gotoxy(28,11);
  printf("Player:%d Enter the coloumn number! ",p);
  scanf("%d",&c);
  if(c<8&&c>0)
    {
      if(ct[c-1]>=5)
	return 0;
      a[ct[c-1]][c-1]=ch;
      ct[c-1]++;
      return 1;
    }
  else return 0;
}

void init(char ar[5][7],int *ct)  //To initialize the grid with spaces
{
  int i=0,j=0;
  while(i<5)
    {
      j=0;                           
      while(j<7)
	{
	  ar[i][j]=' ';
	  j++;
	}
      i++;
    }
  j=0;
  while(j<7)
    ct[j++]=0;
}

void display(char ar[5][7])         //To display the grid, all at once.
{
  int i=5,j=0;
  while(i--)
    {
      j=0;                           
      while(j<7)
	{
	  printf("%c ",ar[i][j++]);
	  if(j!=7)
	    printf("|");
	}
      if(i!=5)
	printf("\n---------------------\n");
      else 
	printf("\n---------------------\n");
    }
  j=0;
  while(j<7)
    printf("%d  ",++j);
}

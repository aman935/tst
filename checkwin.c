#include<stdio.h>
int checkwin(char game[5][7])
{
    int check,count,drcount=0;
    char t;
    int i,j;

    for(i=0;i<5;i++)
    {
        t=game[i][0];
        count=0;
        for(j=0;j<7;j++)
        {   if((game[i][j]=='x')||(game[i][j]=='o'))
            drcount++;

            if(game[i][j]==t)
            {   //printf("%c\n",t);
                count=count+1;
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
                t=game[i][j];
                //printf("%c\n",t);
                count=1;
                //printf("%d\n",count);
            }
        }
    }
    //printf("*");
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
                count=1;
                //printf("%d\n",count);
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
int main()
{
    int i,j;
    char arr[5][7];
    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            scanf("%c",&arr[i][j]);
        }
    }

    printf("%d",checkwin(arr));
}



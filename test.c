#include<ncurses.h>
#include<string.h>
int main()
{
  char m[]="Printing it there";
  int row, col;
  initscr();
  getmaxyx(stdscr,row,col);
  mvprintw(row/2,(col-strlen(m))/2,"%s",m);
  mvprintw(row-2,0,"This screen has %d rows and %d columns\n",row,col);
 printw("Try resizing your window(if possible) and then run this program again");
 refresh();
 getch();
 endwin();
 return 0;
}

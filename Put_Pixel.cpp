#include<graphics.h>
#include<winbgim.h>

int main()
{
   int gd=DETECT,gm;

   initgraph(&gd,&gm,"");
   for(int x=1;x<=500;x++)
        putpixel(x,1,WHITE);
   getch();
   closegraph();
   return 0;
}

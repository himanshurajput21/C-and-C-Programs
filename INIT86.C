#include <dos.h>
#include <stdio.h>
#include <conio.h>
int main()
{
      union REGS in,out;
      in.x.ax=0;
      int86(0x33,&in,&out);
      if(out.x.ax==0)
      {
        printf("No Mouse Available.....");
        exit();
      }
      in.x.ax=1;                                //set ax=1 to display mouse pointer on screen.
      int86(0x33,&in,&out);
	  return 0;                                 //again execute interrupt with new value of ax.
}

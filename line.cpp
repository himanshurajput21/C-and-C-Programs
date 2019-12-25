#include<graphics.h>
#include<dos.h>
#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(1,5,8,1);
    getch();
}

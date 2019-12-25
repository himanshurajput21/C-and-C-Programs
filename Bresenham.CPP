#include<graphics.h>
#include<iostream>
using namespace std;
void Bresenham(int x1,int y1,int x2,int y2)
{
	int dx, dy, x, y,xend, p;

	dx=x2-x1;
	dy=y2-y1;
	cout<<float(dy)/dx<<endl;
	cout<<"dx"<<dx<<endl;
	cout<<"dy"<<dy<<endl;

	p=2*dy-dx;
    cout<<"p"<<p<<endl;
	if(dx>0) {
		x=x1;
		y=y1;
		xend=x2;
	}
	else {
		x=x2;
		y=y2;
		xend =x1;
	}

	while(x<=xend) {
		putpixel(x,y,WHITE);
		cout<<"("<<x<<","<<y<<")";
		x++;
		if(p<0) {
			p=p+2*dy;
			cout<<"p<0:"<<p<<endl;
		}
		else {
			y++;
			p=p+2*dy-2*dx;
			cout<<"p>0:"<<p<<endl;
		}
	}
}

main() {

	int gd = DETECT, gm;
	initgraph(&gd,&gm,"");
	//initwindow(1400,800,"hello");
	//Bresenham(8,5,1,1);
	line(1,5,8,1);
	getch();

	closegraph();
}

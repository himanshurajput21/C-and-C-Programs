#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int gd=DETECT,gm;
    int x1,x2,y1,y2;
    int i,flag=1,d;
    cout<<"Enter value of (x1,y1)=";
    cin>>x1>>y1;
    cout<<"Enter value of (x2,y2)=";
    cin>>x2>>y2;
    initgraph(&gd,&gm,"");
    int dx,dy;
    dx=abs(x2-x1);cout<<"dx="<<dx<<endl;
    dy=abs(y2-y1);cout<<"dy="<<dy<<endl;
    int x,y,t,s1,s2;
    x=x1;cout<<"x="<<x<<endl;
    y=y1;cout<<"y="<<y<<endl;
    if((x2-x1)>0){
        s1=1;cout<<"s1="<<s1<<endl;}
    else{
        s1=-1;cout<<"s1="<<s1<<endl;}
    if((y2-y1)>0){
        s2=1;cout<<"s2="<<s2<<endl;}
    else{
        s2=-1;cout<<"s2="<<s2<<endl;}
    if(dy>dx)
    {
        t=dx;
        dx=dy;
        dy=t;
        cout<<"dx="<<dx<<endl;
        cout<<"dy="<<dy<<endl;
    }
    else
       {flag=0;cout<<"flag="<<flag<<endl;}
    d=2*dy-dx;
    cout<<"d=2*dy-dx::"<<d<<endl;

    outtextxy(x1,y1,"(x1,y1)");
    outtextxy(x2,y2,"(x2,y2)");

    i=0;
    a:
        cout<<"x="<<x<<","<<"y="<<y<<" ---plotted"<<endl;
        putpixel(x,y,RED);
        delay(40);
        while(d>=0)
        {
            if(flag==1){
                x=x+s1;
                cout<<"x=x+s1::"<<x<<endl;}
            else{
                y=y+s2;
                cout<<"y=y+s2::"<<y<<endl;}
            d=d-2*dx;
            cout<<"d=d-2*dx::"<<d<<endl;
        }
        if(flag==1){
            y=y+s2;
            cout<<"y=y+s2::"<<y<<endl;}
        else{
            x=x+s1;
            cout<<"x=x+s1::"<<x<<endl;}
        d=d+2*dy;
        cout<<"d=d+2*dy::"<<d<<endl;
        i++;
        cout<<"i="<<i<<endl;
        if(i<=dx)
            goto a;
        getch();
        closegraph();
        return 0;

}

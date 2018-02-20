#include<iostream>
#include<graphics.h>
//#include<conio.h>
using namespace std;
void drawline(int x0, int y0, int x1, int y1){
    int dx, dy, p, x, y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    putpixel(x,y,12);
    p=2*dy-dx;
    while(x<x1){
            x=x+1;
        if(p<0){
            putpixel(x,y,12);
            p=p+2*dy;
        }else{
            putpixel(x,y,12);
            y++;
            p=p+2*dy-2*dx;
        }
    }
}
int main()
{
    int x0,y0,x1,y1;
    initwindow(800,600,"Bresenham's Line");
    cout<<"Enter co-ordinates of first point: ";
    cin>>x0>>y0;

    cout<<"Enter co-ordinates of second point: ";
    cin>>x1>>y1;
    drawline(x0, y0, x1, y1);

    while(!kbhit());
    closegraph();
}

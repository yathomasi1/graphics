#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
void drawpoints(int x0,int y0, int x, int y){
    putpixel(x0 + x, y0 + y, 7);
    putpixel(x0 + y, y0 + x, 7);
    putpixel(x0 - y, y0 + x, 7);
    putpixel(x0 - x, y0 + y, 7);
    putpixel(x0 - x, y0 - y, 7);
    putpixel(x0 - y, y0 - x, 7);
    putpixel(x0 + y, y0 - x, 7);
    putpixel(x0 + x, y0 - y, 7);
}
void midpointCircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 1;
    int p = 1-radius;

    drawpoints(x0,y0,x,y);
    while (x > y)
    {
    y++;

    if (p <= 0){
        p = p + 2*y+1;
    }else{
        x--;
        p = p+2*y-2*x+1;
    }
    drawpoints(x0,y0,x,y);
    }
}
int main()
{
    int x,y,r;
    initwindow(800,600,"Window Title");
    cout<<"Enter radius of circle: ";
    cin>>r;

    cout<<"Enter co-ordinates of center(x and y): ";
    cin>>x>>y;
    midpointCircle(x, y, r);

    while(!kbhit());
    closegraph();
}

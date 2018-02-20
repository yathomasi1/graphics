#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
void drawcircle(int x0, int y0, int radius)
{
    int x = 0;
    int y = radius;
    int p = 3-2*radius;

    while (x <= y)
    {
    putpixel(x0 + x, y0 + y, 7);
    putpixel(x0 + y, y0 + x, 7);
    putpixel(x0 - y, y0 + x, 7);
    putpixel(x0 - x, y0 + y, 7);
    putpixel(x0 - x, y0 - y, 7);
    putpixel(x0 - y, y0 - x, 7);
    putpixel(x0 + y, y0 - x, 7);
    putpixel(x0 + x, y0 - y, 7);

    x++;

    if (p > 0){
        y -= 1;
        p = p + 4 * (x - y) + 10;
    }else{
        p = p + 4 * x + 6;
    }
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
    drawcircle(x, y, r);
    while(!kbhit());
    return 0;
}


#include<graphics.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
void plotpoint(int xc, int yc, int x, int y){
	putpixel(xc+x,yc+y,4);
	putpixel(xc+x,yc-y,4);
	putpixel(xc-x,yc+y,4);
	putpixel(xc-x,yc-y,4);
}
int main()
{  int pxh=600,pxw=800;
    char ch;
   int wx=pxw/2,wy=pxh/2;
   int xc,yc,x,y;float p;
   long rx,ry;
   cout<<"Enter coordinates of centre : ";
   cin>>xc>>yc;
   cout<<"Enter x,y radius of ellipse: ";
   cin>>rx>>ry;
   xc += wx;
   yc = wy - yc;
   initwindow(pxw,pxh,"Hello");
    line(wx,0,wx,pxh);
    line(0,wy,pxw,wy);
   //Region 1
   p=ry*ry-rx*rx*ry+rx*rx/4;
   x=0;y=ry;
   plotpoint(xc,yc,x,y);
   while(2.0*ry*ry*x <= 2.0*rx*rx*y)
   {
	if(p < 0)
	{
		x++;
		p = p+2*ry*ry*x+ry*ry;
	}
	else
	{
		x++;y--;
		p = p+2*ry*ry*x-2*rx*rx*y-ry*ry;
	}
    plotpoint(xc,yc,x,y);
   }

  //Region 2
   p=ry*ry*(x+0.5)*(x+0.5)+rx*rx*(y-1)*(y-1)-rx*rx*ry*ry;
   while(y > 0)
   {
	if(p <= 0)
	{
		x++;y--;
		p = p+2*ry*ry*x-2*rx*rx*y+rx*rx;
	}
	else
	{
		y--;
		p = p-2*rx*rx*y+rx*rx;
	}
	plotpoint(xc,yc,x,y);
   }
   getch();
   closegraph();
   cout<<endl<<"Want to try again(y/n): ";
   cin>>ch;
   if(ch=='y'){main();}
   return 0;
}

#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{

   int gd = 0, gm;

   initgraph(&gd, &gm,"");
   int x1,y1,x2,y2;
   int tx,ty;
   int refx, refy;
   int sx , sy;
   float deg;
   cout<<"Enter the values"<<endl;
   cin>>x1>>y1>>x2>>y2;
   //Rectangle
   rectangle(x1,y1,x2,y2);

   //Translation

   //cout<<"Enter translation factor"<<endl;
   //cin>>tx>>ty;

   //x1 = x1 + tx ;
  // y1 = y1 + ty;
  // x2 = x2 + tx;
//y2 = y2 + ty;

   //rectangle(x1,y1,x2,y2);

   //scaling

   //cout<<"enter scaling factor"<<endl;
  // cin>>sx>>sy;

   // x1 = x1*sx;
   // y1 = y1*sy;
    //x2 = x2*sx;
    //y2 = y2*sy;
    //setcolor(RED);
    //rectangle(x1,y1,x2,y2);

    //Rotation
    cout<<"enter angle of rotation"<<endl;
    cin>>deg;
    float t=(22*deg)/(180*7);

    refx = refy = 100;
    float l1 = refx + (x2-refx)*cos(t)-(refy-y2)*sin(t);
    float b1 = refy +(x2-refx)*sin(t)+ (refy-y2)*cos(t);
    float l2 = refx+ (x1-refx)*cos(t)-(refy-y1)*sin(t);
    float b2 = refy + (x1-refx)*sin(t) +(refy-y1)*cos(t);
    float l3= refx + (x2-refx)*cos(t) - (refy-y1)*sin(t);
    float b3 = refy + (y1-refy)*cos(t)+(y1-refx)*sin(t);
    line(x1,y2,l1 ,b1);
    line(x1,y2,l2,b2);
    line(l1,b2,l3,b3);
    line(l2,b2,l3,b3);

   getch();
   closegraph();
   return 0;
}

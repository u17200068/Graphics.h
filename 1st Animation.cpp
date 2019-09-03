#include <graphics.h>
#include <iostream>

using namespace std;

int main()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    initwindow(1500,400);

    for (int i=0; i<=1450; i++)
    {
    //Sign
    setcolor(YELLOW);
    rectangle(1420,100,1490,140);
    line(1450,140,1450,230);
    line(1460,140,1460,230);
    line(1450,140,1460,140);
    setcolor(BLUE);
    outtextxy(1425,105,"Done By:");
    outtextxy(1427,120,"Madyan");

    //Road
    line(0,230, 1500, 230);

    //Car
    setcolor(RED);
    line(190+i,150,460+i,150);
    line(325+i,100,325+i,150);
    line(250+i,100,400+i,100);
    line(190+i,150,250+i,100);
    line(460+i,150,400+i,100);
    line(190+i,150,100+i,150);
    line(460+i,150,550+i,150);
    line(100+i,150,100+i,200);
    line(100+i,200,190+i,200);
    line(460+i,200,550+i,200);
    line(550+i,150,550+i,200);
    arc(220+i,200,0+i,180,30);
    arc(430+i,200,0+i,180,30);
    line(250+i,200,400+i,200);
    setcolor(GREEN);
    circle(220+i,200,30);
    circle(430+i,200,30);

    //Lower delay to increase speed
    delay(15);
    cleardevice();
    }


    getch();
    closegraph();
    return 0;
}

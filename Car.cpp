#include <graphics.h>

using namespace std;

void makecar(int x1, int y1, int x2, int y2,int r)
{
    line(x1,y1,x2,y2);
    line(x1-60,y1+50,x2-150,y2);
    line(x1+210,y1+50,x2,y2);
    line(x1-60,y1+50,x2-300,y2+50);
    line(x1+210,y1+50,x2+150,y2+50);
    line(x1-150,y1+50,x2-300,y2+100);
    line(x1-150,y1+100,x2-210,y2+100);
    line(x1+210,y1+100,x2+150,y2+100);
    line(x1+300,y1+50,x2+150,y2+100);
    arc(x1-30,y1+100,x2-400,y2+80,r);
    arc(x1+180,y1+100,x2-400,y2+80,r);
    line(x1,y1+100,x2,y2+100);
    circle(x1-30,y1+100,r);
    circle(x1+180,y1+100,r);
}

int main()
{
    int gd=DETECT,gm,x1=250,x2=400,y1=100,y2=100;

    initgraph(&gd,&gm,"");

    makecar(250, 100, 400, 100, 30);
    makecar(250, 300, 400, 300, 30);

    getch();
    closegraph();
}

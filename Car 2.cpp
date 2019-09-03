#include <graphics.h>

using namespace std;

void makecar(int x1,int y1,int x2,int y2,int r)
{

        bar(x1,y1,x2,y2);
        bar(x1+200,y1+50,x2+50,y2);
        bar(x1-50,y1+50,x2-200,y2);
        circle(x1+20,y1+125,r);
        circle(x1+185,y1+125,r);
}

int main()
{
    int gd=DETECT, gm;

    initgraph(&gd,&gm,"");

    makecar(200,200,400,300,25);

    getch();
    closegraph();
}

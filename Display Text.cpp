#include <graphics.h>

using namespace std;

int main ()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");

    outtextxy(50,50, "Learning Graphics.h");

    getch();
    closegraph();
}

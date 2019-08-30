#include <graphics.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    int x=100, y=100, r=50;
    circle(x,y,r);

    getch();
    closegraph();
}

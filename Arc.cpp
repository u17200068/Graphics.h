#include <graphics.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    int x=250,y=250,start_angle=0,end_angle=300,radius=100;

    initgraph(&gd, &gm, "");



    arc(x,y,start_angle,end_angle,radius);

    getch();
    closegraph();
}

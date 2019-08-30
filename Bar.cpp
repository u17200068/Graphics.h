#include <graphics.h>

using namespace std;

int main()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");

    bar(100,100,200,200);
    bar(250,250,400,300);

    getch();
    closegraph();
}

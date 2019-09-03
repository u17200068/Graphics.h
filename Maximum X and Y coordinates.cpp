#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int gd=DETECT, gm, maximumX, maximumY;

    initgraph(&gd,&gm,"");

    maximumX = getmaxx();
    maximumY = getmaxy();

    cout << maximumX << "\n" << maximumY ;

    getch();
    closegraph();
}

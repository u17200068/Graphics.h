#include <iostream>
#include <graphics.h>

using namespace std;

void makex(int x1,int y1)
{
    line(x1,y1,x1+50,y1+50);
    line(x1+50,y1,x1,y1+50);
}

void makeo(int x1,int y1)
{
    circle(x1,y1,30);

}

void rules(bool x)
{
    if (x==true)
    {
    setcolor(GREEN);
    outtextxy(700,10,"RULES:");
    outtextxy(500,40,"1. Enter the x and y coordinate wherever you want the X or O to appear.");
    outtextxy(500,70,"2. Values for x and y coordinates are 11 ,12 ,13 ,21 ,22 ,23 ,31 ,32 ,33.");
    outtextxy(500,100,"3. X goes first, followed by O.");
    outtextxy(1,50,"1");
    outtextxy(1,150,"2");
    outtextxy(1,230,"3");
    outtextxy(50,3,"1");
    outtextxy(150,3,"2");
    outtextxy(230,3,"3");
    }
}

void drawboard(bool x)
{
    if (x==true)
    {
    setcolor(RED);
    line(10,20,310,20);
    line(10,20,10,260);
    line(110,20,110,260);
    line(210,20,210,260);
    line(310,20,310,260);
    line(10,100,310,100);
    line(10,180,310,180);
    line(10,260,310,260);
    }

}

void oneplayergame()
{

}

void twoplayergame()
{

}

void win()
{
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,24);
    outtextxy(500,250,"YOU WIN!!");
}

void lose()
{
    setcolor(RED);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,400);
    outtextxy(500,250,"BOOOO, YOU LOSE!!");
}

void game()
{
    char gamestart;
    int players;
    bool k=true;

    cout << "Press y to start game and n to not play: \n";
    cin >>  gamestart;

    if(gamestart=='y' || gamestart=='Y')
    {
        rules(k);
        drawboard(k);

        cout << "Type 1 for single player and 2 for multiplayer: \n";
        cin >> players;

        if (players = 1)
        {
        oneplayergame();
        }
        else if (players = 2)
        {
        twoplayergame();
        }
    }

    else if (gamestart=='n' || gamestart=='N')
    {
        k=false;
        rules(k);
        drawboard(k);
        cleardevice();
        closegraph();
    }
}


int main()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    initwindow(1000,500);

    game();

    getch();
    closegraph();
}

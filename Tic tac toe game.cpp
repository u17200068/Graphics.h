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

void rules()
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

void drawboard()
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

void game()
{
    int x,o,position[9],players,xoro;
    cout << "Type 1 for single player and 2 for multiplayer: \n";
    cin >> players;

    if (players = 2)
    {
    cout << "Player 1: Enter the coordinate for X and Y together: \n";
    cin >> x;


    if(x == 11)
    {
       makex(30,40);
       position[0]=1;
    }
    else if(x == 12)
    {
       makex(130,40);
       position[0]=2;
    }
    else if(x == 13)
    {
       makex(230,40);
       position[0]=3;
    }
    else if(x == 21)
    {
       makex(30,120);
       position[0]=4;
    }
    else if(x == 22)
    {
       makex(130,120);
       position[0]=5;
    }
    else if(x == 23)
    {
       makex(230,120);
       position[0]=6;
    }
    else if(x == 31)
    {
       makex(30,200);
       position[0]=7;
    }
    else if(x == 32)
    {
       makex(130,200);
       position[0]=8;
    }
    else if(x == 33)
    {
       makex(230,200);
       position[0]=9;
    }

    cout <<"Player 2: Enter the coordinate for X and Y position \n";
    cin >> o;

    if(position[0]=1)
    {
      if(o==11)
      {
        outtextxy(500,140,"Sorry that Place is taken");
        outtextxy(500,170,"Try Again!");
        cin >> o;
      }
      if(o == 12)
      {
       makeo(160,60);
       position[0]=2;
      }
      else if(o == 13)
      {
       makeo(230,40);
       position[0]=3;
      }
      else if(o == 21)
      {
       makeo(30,120);
       position[0]=4;
      }
      else if(o == 22)
      {
       makeo(130,120);
       position[0]=5;
      }
      else if(o == 23)
      {
       makeo(230,120);
       position[0]=6;
      }
      else if(o == 31)
      {
       makeo(30,200);
       position[0]=7;
      }
      else if(o == 32)
      {
       makeo(130,200);
       position[0]=8;
      }
      else if(o == 33)
      {
       makeo(230,200);
       position[0]=9;
      }
    }

    else if(position[0]=2)
    {
        if(o==12)
        {
          outtextxy(500,140,"Sorry that Place is taken");
          outtextxy(500,170,"Try Again!");
          cin >> o;
        }
        if(o == 11)
        {
        makeo(30,40);
        position[0]=1;
        }
        else if(o == 13)
        {
        makeo(30,200);
        position[0]=3;
        }
        else if(o == 21)
        {
        makeo(130,40);
        position[0]=4;
        }
        else if(o == 22)
        {
        makeo(130,120);
        position[0]=5;
        }
        else if(o == 23)
        {
        makeo(130,200);
        position[0]=6;
        }
        else if(o == 31)
        {
        makeo(230,40);
        position[0]=7;
        }
        else if(o == 32)
        {
        makeo(230,120);
        position[0]=8;
        }
        else if(o == 33)
        {
        makeo(230,200);
        position[0]=9;
        }
    }
      else if(position[0]=3)
    {
        if(o==12)
        {
        makeo(160,60);
        position[0]=2;
        }
        if(o == 11)
        {
        makeo(30,40);
        position[0]=1;
        }
        else if(o == 13)
        {
          outtextxy(500,140,"Sorry that Place is taken");
          outtextxy(500,170,"Try Again!");
          cin >> o;
        }
        else if(o == 21)
        {
        makeo(130,40);
        position[0]=4;
        }
        else if(o == 22)
        {
        makeo(130,120);
        position[0]=5;
        }
        else if(o == 23)
        {
        makeo(130,200);
        position[0]=6;
        }
        else if(o == 31)
        {
        makeo(230,40);
        position[0]=7;
        }
        else if(o == 32)
        {
        makeo(230,120);
        position[0]=8;
        }
        else if(o == 33)
        {
        makeo(230,200);
        position[0]=9;
        }
    }
          else if(position[0]=4)
    {
        if(o==12)
        {
        makeo(160,60);
        position[0]=2;
        }
        if(o == 11)
        {
        makeo(30,40);
        position[0]=1;
        }
        else if(o == 13)
        {
        makeo(30,200);
        position[0]=3;
        }
        else if(o == 21)
        {
          outtextxy(500,140,"Sorry that Place is taken");
          outtextxy(500,170,"Try Again!");
          cin >> o;
        }
        else if(o == 22)
        {
        makeo(130,120);
        position[0]=5;
        }
        else if(o == 23)
        {
        makeo(130,200);
        position[0]=6;
        }
        else if(o == 31)
        {
        makeo(230,40);
        position[0]=7;
        }
        else if(o == 32)
        {
        makeo(230,120);
        position[0]=8;
        }
        else if(o == 33)
        {
        makeo(230,200);
        position[0]=9;
        }
  }
}

int main()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    initwindow(1000,500);

    rules();
    drawboard();

    game();

    getch();
    closegraph();
}
